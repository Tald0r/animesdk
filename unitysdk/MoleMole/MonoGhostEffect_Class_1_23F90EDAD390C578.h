#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F35B080B137ECC46;
class NapGradient;
namespace MoleMole { class MonoGhostEffect_Class_1_A70517BD0BB41E80; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2015931F02312626_OFFSET UNITYSDK_OFFSET(0xA48E240)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_21979913643BB809_OFFSET UNITYSDK_OFFSET(0xA48DA00)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA48C5D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA48DAE0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA48D4D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xA48CE90)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA48D840)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_5E154E0450E4419D_OFFSET UNITYSDK_OFFSET(0xA48C680)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_626C719A884DEF9A_1_OFFSET UNITYSDK_OFFSET(0xA48C530)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xA48C450)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_7231FC1414B04093_OFFSET UNITYSDK_OFFSET(0xA48D530)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_73281C4326FBC42D_OFFSET UNITYSDK_OFFSET(0xA48E490)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xA48DEF0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_846C3A66AC33B6FF_OFFSET UNITYSDK_OFFSET(0xA48E0D0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xA48C890)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_8A26F63E185CF58D_OFFSET UNITYSDK_OFFSET(0xA48DC50)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_976A756A3444B151_OFFSET UNITYSDK_OFFSET(0xA48DB60)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA48DE70)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_CE8002D857FA5D0D_OFFSET UNITYSDK_OFFSET(0xA48D1B0)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0xA48C700)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0xA48E940)
#define MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578__CTOR_OFFSET UNITYSDK_OFFSET(0xA48C1D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_Class_1_23F90EDAD390C578_TypeDefinitionIndex = 54563;

	class MonoGhostEffect_Class_1_23F90EDAD390C578 : public ::System::Object
	{
	public:
		::Class_3_9AE843FF905C0BDB* Field_1_4; // 0x10
		::UnityEngine::Transform* Field_1_6; // 0x18
		::MoleMole::EntityHandle Field_1_12; // 0x20
		::MoleMole::Battle::Entity* Field_1_3; // 0x30
		::Class_3_F35B080B137ECC46* Field_1_5; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::MonoGhostEffect_Class_1_A70517BD0BB41E80*>* Field_1_2; // 0x40
		::System::Boolean Field_1_9; // 0x48
		::System::Boolean Field_1_10; // 0x49
		::System::Boolean Field_1_8; // 0x4A
		::System::Boolean Field_1_7; // 0x4B
		::System::Boolean Field_1_11; // 0x4C
		::System::Single Field_1_14; // 0x50
		::UnityEngine::Vector3 Field_1_15; // 0x54
		::Struct_2_70FF0A172150B476 Field_1_13; // 0x60
		::System::Single Field_1_0; // 0x70
		::System::Single Field_1_1; // 0x74

		::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
		}

		::System::Void Method_1_626C719A884DEF9A_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_626C719A884DEF9A_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_1_5E154E0450E4419D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_5E154E0450E4419D_OFFSET))(this);
		}

		::System::Void Method_1_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Void Method_1_CE8002D857FA5D0D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_CE8002D857FA5D0D_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_7231FC1414B04093(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_7231FC1414B04093_OFFSET))(this, a1);
		}

		::System::Void Method_1_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_1_976A756A3444B151(::MoleMole::MonoGhostEffect_Class_1_A70517BD0BB41E80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGhostEffect_Class_1_A70517BD0BB41E80*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_976A756A3444B151_OFFSET))(this, a1);
		}

		::System::Void Method_1_CE939F9D16359382()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_CE939F9D16359382_OFFSET))(this);
		}

		::System::Void Method_1_8A26F63E185CF58D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_8A26F63E185CF58D_OFFSET))(this, a1);
		}

		::System::Void Method_1_809094DEBF13B21A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_809094DEBF13B21A_OFFSET))(this);
		}

		::System::Void Method_1_846C3A66AC33B6FF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_846C3A66AC33B6FF_OFFSET))(this, a1);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_1_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
		}

		::System::Void Method_1_2015931F02312626(::UnityEngine::Material* a1, ::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* a2, ::UnityEngine::Material* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>* a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>*, ::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapGradient*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*>*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_2015931F02312626_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_1_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_1_73281C4326FBC42D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_73281C4326FBC42D_OFFSET))(this, a1);
		}

		::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_21979913643BB809(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_CLASS_1_23F90EDAD390C578_METHOD_1_21979913643BB809_OFFSET))(this, a1);
		}
	};
}
