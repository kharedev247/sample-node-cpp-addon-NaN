{
    "targets": [
        {
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ],
            "target_name": "sample-addon",
            "sources": [
                "src/node-module.cpp",
                "src/sample-addon.cpp"
            ],
            "msvs_settings": {
                "VCCLCompilerTool": {
                    "AdditionalOptions": ['/std:c++latest']
                }
            },
            "defines": [
                "WIN32",
                "UNICODE"
            ]
        }
    ]
}