#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CE305682F16B8B7_Class_0_16E7307DCC43CB2C_41;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3CE305682F16B8B7_METHOD_2_0F2F6129DED039AB_OFFSET UNITYSDK_OFFSET(0x76EFF20)
#define CLASS_2_3CE305682F16B8B7_METHOD_2_0F5F46E3AE72E8F4_OFFSET UNITYSDK_OFFSET(0x76EFCD0)
#define CLASS_2_3CE305682F16B8B7_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x76F0150)
#define CLASS_2_3CE305682F16B8B7_METHOD_2_484C07E1CF62ADA1_OFFSET UNITYSDK_OFFSET(0x76F0200)
#define CLASS_2_3CE305682F16B8B7_METHOD_2_69894F206FA3DF5D_OFFSET UNITYSDK_OFFSET(0x76EFBC0)
#define CLASS_2_3CE305682F16B8B7__CTOR_OFFSET UNITYSDK_OFFSET(0x76EFBB0)

inline static constexpr unsigned int Class_2_3CE305682F16B8B7_TypeDefinitionIndex = 66959;

class Class_2_3CE305682F16B8B7 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_3CE305682F16B8B7*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_69894F206FA3DF5D(::MoleMole::Config::ProjectileTraitConfig a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::Class_2_3CE305682F16B8B7_Class_0_16E7307DCC43CB2C_41* a4)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig, ::UnityEngine::Vector3, ::System::Action*, ::Class_2_3CE305682F16B8B7_Class_0_16E7307DCC43CB2C_41*))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_METHOD_2_69894F206FA3DF5D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0F5F46E3AE72E8F4(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_METHOD_2_0F5F46E3AE72E8F4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0F2F6129DED039AB(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_METHOD_2_0F2F6129DED039AB_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_METHOD_2_10867B69EFBCA83E_OFFSET))(a1);
	}

	::System::Void Method_2_484C07E1CF62ADA1(::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>*))((::PBYTE)hIl2Cpp + CLASS_2_3CE305682F16B8B7_METHOD_2_484C07E1CF62ADA1_OFFSET))(this, a1);
	}
};
