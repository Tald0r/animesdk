#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0FEBF968EE0D1F97_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x88E57B0)
#define CLASS_1_0FEBF968EE0D1F97_METHOD_1_6A2BBF2C3676E637_OFFSET UNITYSDK_OFFSET(0x88E5A20)
#define CLASS_1_0FEBF968EE0D1F97_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x88E5A60)

inline static constexpr unsigned int Class_1_0FEBF968EE0D1F97_TypeDefinitionIndex = 42601;

class Class_1_0FEBF968EE0D1F97 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIFishV2** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIFishV2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0FEBF968EE0D1F97_TypeDefinitionIndex)->GetStaticField(0x2EE90);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUIFishV2* Method_1_6A2BBF2C3676E637()
	{
		return ((::MoleMole::ConfigUIFishV2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_METHOD_1_6A2BBF2C3676E637_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
