webtalk_init -webtalk_dir E:\\xilinx\\Zynq\\webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "2020-09-11 18:15:16" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2018.3" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2018.3" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "j4pq966mq5qrrmvdcca6q5fjef" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2018.3_7" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "7" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "Microsoft Windows 8 or later , 64-bit" -context "user_environment"
webtalk_add_data -client project -key os_release -value "major release  (build 9200)" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "Intel(R) Core(TM) i5-8250U CPU @ 1.60GHz" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "1800 MHz" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "1" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "8.438 GB" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1599817648896" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key os -value "linux" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key apptemplate -value "linux_empty_app" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key RecordType -value "APPCreation" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key LangUsed -value "C" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key Procused -value "" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key projSize -value "92.3984375" -context "sdk\\\\application/1599817648896"
webtalk_add_data -client sdk -key uid -value "NA" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key RecordType -value "ToolUsage" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key BootgenCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key DebugCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key PerfCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key FlashCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key CrossTriggCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_add_data -client sdk -key QemuDebugCount -value "0" -context "sdk\\\\bsp/1599819315827"
webtalk_transmit -clientid 3952581132 -regid "" -xml E:\\xilinx\\Zynq\\webtalk\\usage_statistics_ext_sdk.xml -html E:\\xilinx\\Zynq\\webtalk\\usage_statistics_ext_sdk.html -wdm E:\\xilinx\\Zynq\\webtalk\\sdk_webtalk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
