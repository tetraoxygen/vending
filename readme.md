# Vending
from Tetraoxygen Software

## What is Vending?
I'm going to assume that you mean the software, not the concept. Vending is a simple little application that will calculate change for an extremely primitive vending machine. It's written in C++ and runs on POSIX systems (sorry, not sorry Windows). 

## How do I run Vending?
You extract the archive, move it into your home directory as `.vending` if you want to install it. Otherwise, just run it in the `vending` directory, and it'll run fine. **MAKE SURE YOUR `stock` FILE IS IN THE SAME DIRECTORY AS VENDING.** IT WILL CRASH WITHOUT IT. 

## JSON Structure

Vending relies on JSON for stockkeeping because that was an established standard. The specific structure is as follows:

	{
	"item"{
		"name": "[ITEM_NAME]"
		"cost": [COST]
	}
	"item"{
		"name": "[ITEM_NAME]"
		"cost": [COST]
	}
	}
	
It's quite simple. Vending automatically handles how to present the items. To add another item, you just follow that template again in the `stock` file.

#### I'm getting a weird C++ error starting with "libc++abi.dylib"!

This means your stockkeeping file is broken. Fix it with "JSON Structure" above. You can further diagnose your problem [here](https://jsonlint.com/). 
