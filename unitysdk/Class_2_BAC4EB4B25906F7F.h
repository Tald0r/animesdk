#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

namespace System { class String; }

#define CLASS_2_BAC4EB4B25906F7F_METHOD_2_0252F3F4E9893706_OFFSET UNITYSDK_OFFSET(0xE6EE730)
#define CLASS_2_BAC4EB4B25906F7F_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xE6EE860)
#define CLASS_2_BAC4EB4B25906F7F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xE6EE680)
#define CLASS_2_BAC4EB4B25906F7F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE6EE800)
#define CLASS_2_BAC4EB4B25906F7F_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE6EE500)
#define CLASS_2_BAC4EB4B25906F7F__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6EE600)
#define CLASS_2_BAC4EB4B25906F7F__CTOR_OFFSET UNITYSDK_OFFSET(0xE6EE670)

inline static constexpr unsigned int Class_2_BAC4EB4B25906F7F_TypeDefinitionIndex = 47270;

class Class_2_BAC4EB4B25906F7F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x2D; // 0x0
	::MoleMole::Config::BuddyFightModeType Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_0252F3F4E9893706(::System::UInt32 a1, ::MoleMole::Config::BuddyFightModeType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F_METHOD_2_0252F3F4E9893706_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAC4EB4B25906F7F_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
