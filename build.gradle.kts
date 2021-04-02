
println("Building Santa Paravia with Gradle")

val version = "1.0.0"

plugins {
     `cpp-application`

}


application {
    targetMachines.add (machines.linux.x86_64)
    
    // dependencies {
    //      implementation(file("somelibrary.so"))
    // }

}


tasks.withType(CppCompile::class.java).configureEach {
    // Define a preprocessor macro for every binary
    macros.put("NDEBUG", null)

    // Define a compiler options
    compilerArgs.add("-fpermissive")
    compilerArgs.add("-std=c++11")

    // Define toolchain-specific compiler options
    compilerArgs.addAll(toolChain.map { toolChain ->
        when (toolChain) {
            is Gcc, is Clang -> listOf("-O2", "-fno-access-control")
            is VisualCpp -> listOf("/Zi")
            else -> listOf()
        }
    })
    
}


tasks.withType(LinkExecutable::class.java).configureEach {
    linkerArgs.add("-v")
    linkerArgs.add("-lncurses")

}
