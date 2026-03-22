#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace MoleMole::Config { class WeaponInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F1E4AAC2FC9192D5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x7863670)
#define CLASS_1_F1E4AAC2FC9192D5_METHOD_1_837A9AF5D238833A_OFFSET UNITYSDK_OFFSET(0x78638D0)
#define CLASS_1_F1E4AAC2FC9192D5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x7863960)
#define CLASS_1_F1E4AAC2FC9192D5_METHOD_1_C2485C31652066E3_OFFSET UNITYSDK_OFFSET(0x7863540)
#define CLASS_1_F1E4AAC2FC9192D5__CTOR_OFFSET UNITYSDK_OFFSET(0x7863530)

inline static constexpr unsigned int Class_1_F1E4AAC2FC9192D5_TypeDefinitionIndex = 75214;

class Class_1_F1E4AAC2FC9192D5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIWeapon** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIWeapon**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1E4AAC2FC9192D5_TypeDefinitionIndex)->GetStaticField(0x30B20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::WeaponInfo* Method_1_C2485C31652066E3(::System::Int32 a1)
	{
		return ((::MoleMole::Config::WeaponInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_METHOD_1_C2485C31652066E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUIWeapon* Method_1_837A9AF5D238833A()
	{
		return ((::MoleMole::Config::ConfigUIWeapon*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_METHOD_1_837A9AF5D238833A_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F1E4AAC2FC9192D5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
