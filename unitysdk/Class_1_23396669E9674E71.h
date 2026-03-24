#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_23396669E9674E71_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x71E9FE0)
#define CLASS_1_23396669E9674E71_METHOD_1_75EF44F0513F2665_OFFSET UNITYSDK_OFFSET(0x71E9FA0)
#define CLASS_1_23396669E9674E71_METHOD_1_7D3B5EB482981DA7_OFFSET UNITYSDK_OFFSET(0x71E9CF0)
#define CLASS_1_23396669E9674E71_METHOD_1_80B59009C5EC302B_OFFSET UNITYSDK_OFFSET(0x71E9AD0)
#define CLASS_1_23396669E9674E71_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x71E9B10)

inline static constexpr unsigned int Class_1_23396669E9674E71_TypeDefinitionIndex = 49396;

class Class_1_23396669E9674E71 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEntityAttackEffectNames** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigEntityAttackEffectNames**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23396669E9674E71_TypeDefinitionIndex)->GetStaticField(0x351B0);
	}

	static ::System::Void Method_1_80B59009C5EC302B(::MoleMole::Config::ConfigEntityAttackEffectNames* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackEffectNames*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_80B59009C5EC302B_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_7D3B5EB482981DA7(::System::String* a1, ::MoleMole::Config::DamageElementType a2)
	{
		return ((::System::String*(*)(::System::String*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_7D3B5EB482981DA7_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityAttackEffectNames* Method_1_75EF44F0513F2665()
	{
		return ((::MoleMole::Config::ConfigEntityAttackEffectNames*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_75EF44F0513F2665_OFFSET))();
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23396669E9674E71_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}
};
