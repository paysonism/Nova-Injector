#pragma once

void start_driver()
{
	driver().handle_driver();

	if (!driver().is_loaded())
	{
		cout << xor_a(" Loading Driver...\n") << endl;
		mmap_driver();
	}

	driver().handle_driver();
	driver().is_loaded() ? cout << xor_a(" Driver Loaded\n") << endl : cout << xor_a(" Driver Failed to Load.\n") << endl;
}

