#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_4446D357C89B715C;
namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define CLASS_2_C27F583CB06310C7_METHOD_2_596D9113D22B8335_1_OFFSET UNITYSDK_OFFSET(0x93BC0A0)
#define CLASS_2_C27F583CB06310C7_METHOD_2_596D9113D22B8335_OFFSET UNITYSDK_OFFSET(0x93BC000)
#define CLASS_2_C27F583CB06310C7_METHOD_2_80A9DB3F285E392F_OFFSET UNITYSDK_OFFSET(0x93BBED0)
#define CLASS_2_C27F583CB06310C7_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x93BBDD0)
#define CLASS_2_C27F583CB06310C7_ONSHOW_OFFSET UNITYSDK_OFFSET(0x93BBAD0)
#define CLASS_2_C27F583CB06310C7__CTOR_OFFSET UNITYSDK_OFFSET(0x93BBE50)

inline static constexpr unsigned int Class_2_C27F583CB06310C7_TypeDefinitionIndex = 77159;

class Class_2_C27F583CB06310C7 : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::Class_2_C27F583CB06310C7** StaticGet_Field_2_0()
	{
		return (::Class_2_C27F583CB06310C7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C27F583CB06310C7_TypeDefinitionIndex)->GetStaticField(0x3DA60);
	}
	::MoleMole::UILoginMessageBoxPopWindowController* Field_2_1; // 0x18
	::Class_2_4446D357C89B715C* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7_ONCLOSE_OFFSET))(this);
	}

	static ::Class_2_C27F583CB06310C7* Method_2_80A9DB3F285E392F()
	{
		return ((::Class_2_C27F583CB06310C7*(*)())((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7_METHOD_2_80A9DB3F285E392F_OFFSET))();
	}

	::System::Void Method_2_596D9113D22B8335()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7_METHOD_2_596D9113D22B8335_OFFSET))(this);
	}

	::System::Void Method_2_596D9113D22B8335_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C27F583CB06310C7_METHOD_2_596D9113D22B8335_1_OFFSET))(this);
	}
};
