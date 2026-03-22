#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_3BAB7E4584B1AD50_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6C12D30)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x6C141E0)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_1DAD3BE02D974C1D_OFFSET UNITYSDK_OFFSET(0x6C14620)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_344703EC9DA44EBD_OFFSET UNITYSDK_OFFSET(0x6C13FB0)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_40742BB292FA4709_OFFSET UNITYSDK_OFFSET(0x6C13D50)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x6C13EE0)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_7C005B7561105EE2_OFFSET UNITYSDK_OFFSET(0x6C13B80)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6C13F40)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C145C0)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_D41D09491F79C734_OFFSET UNITYSDK_OFFSET(0x6C14520)
#define CLASS_3_3BAB7E4584B1AD50_METHOD_3_ECE88F9991412C09_OFFSET UNITYSDK_OFFSET(0x6C14440)
#define CLASS_3_3BAB7E4584B1AD50_UPDATE_OFFSET UNITYSDK_OFFSET(0x6C13880)
#define CLASS_3_3BAB7E4584B1AD50__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C13B40)
#define CLASS_3_3BAB7E4584B1AD50__CTOR_OFFSET UNITYSDK_OFFSET(0x6C13B20)

inline static constexpr unsigned int Class_3_3BAB7E4584B1AD50_TypeDefinitionIndex = 60508;

class Class_3_3BAB7E4584B1AD50 : public ::Class_2_F33340E023067DAF
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_3_3()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3BAB7E4584B1AD50_TypeDefinitionIndex)->GetStaticField(0xFD10);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_7C005B7561105EE2(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_7C005B7561105EE2_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_40742BB292FA4709(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_40742BB292FA4709_OFFSET))(a1);
	}

	::System::Void Method_3_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_07A48CE1AA24868D_OFFSET))(this, a1);
	}

	static ::UnityEngine::Bounds Method_3_344703EC9DA44EBD(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Bounds(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_344703EC9DA44EBD_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_3_ECE88F9991412C09(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::UnityEngine::Bounds(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_ECE88F9991412C09_OFFSET))(a1);
	}

	static ::System::Void Method_3_D41D09491F79C734(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_D41D09491F79C734_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1DAD3BE02D974C1D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3BAB7E4584B1AD50_METHOD_3_1DAD3BE02D974C1D_OFFSET))(this, a1);
	}
};
