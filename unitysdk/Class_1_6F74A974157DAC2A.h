#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6F74A974157DAC2A_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x827EFE0)
#define CLASS_1_6F74A974157DAC2A_METHOD_1_66CA9DE8E66010B9_OFFSET UNITYSDK_OFFSET(0x827EBC0)
#define CLASS_1_6F74A974157DAC2A_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x827EED0)
#define CLASS_1_6F74A974157DAC2A_METHOD_1_E05DB26778D9E01F_OFFSET UNITYSDK_OFFSET(0x827EC50)
#define CLASS_1_6F74A974157DAC2A_METHOD_1_F5E88F336EAA160D_OFFSET UNITYSDK_OFFSET(0x827ECF0)

inline static constexpr unsigned int Class_1_6F74A974157DAC2A_TypeDefinitionIndex = 53560;

class Class_1_6F74A974157DAC2A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIVirtualJoystick** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIVirtualJoystick**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F74A974157DAC2A_TypeDefinitionIndex)->GetStaticField(0x30670);
	}

	static ::MoleMole::Config::ConfigUIVirtualJoystick* Method_1_66CA9DE8E66010B9()
	{
		return ((::MoleMole::Config::ConfigUIVirtualJoystick*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_METHOD_1_66CA9DE8E66010B9_OFFSET))();
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* Method_1_E05DB26778D9E01F(::System::Int32 a1)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_METHOD_1_E05DB26778D9E01F_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* Method_1_F5E88F336EAA160D(::Enum_3_71AA90D596A09AC8_3 a1)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::Enum_3_71AA90D596A09AC8_3))((::PBYTE)hIl2Cpp + CLASS_1_6F74A974157DAC2A_METHOD_1_F5E88F336EAA160D_OFFSET))(a1);
	}
};
