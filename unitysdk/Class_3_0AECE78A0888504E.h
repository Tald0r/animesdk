#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF.h"
#include "unitysdk/Enum_3_0DE7EC2BC9304BF2.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_8F09B36EC2E2FB2D.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_912CA5D103261DFB;
class Class_3_BD1C1745FBC83F51;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Config { class CharacterAssistAimConfig; }
namespace MoleMole::Config { class CharacterAutoAimConfig; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_0AECE78A0888504E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8E58E90)
#define CLASS_3_0AECE78A0888504E_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x8E59330)
#define CLASS_3_0AECE78A0888504E_METHOD_3_1E6E2B1163915FBE_OFFSET UNITYSDK_OFFSET(0x8E5E2E0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_2A77E68FCC7687A0_OFFSET UNITYSDK_OFFSET(0x8E5B0B0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_3A3C2E874E660E76_OFFSET UNITYSDK_OFFSET(0x8E5A750)
#define CLASS_3_0AECE78A0888504E_METHOD_3_4617FA41BEC0E945_OFFSET UNITYSDK_OFFSET(0x8E59520)
#define CLASS_3_0AECE78A0888504E_METHOD_3_4FA263546972185D_OFFSET UNITYSDK_OFFSET(0x8E5DD90)
#define CLASS_3_0AECE78A0888504E_METHOD_3_62FFA88589F1F6BE_OFFSET UNITYSDK_OFFSET(0x8E5AF70)
#define CLASS_3_0AECE78A0888504E_METHOD_3_6E248FFA912961D2_OFFSET UNITYSDK_OFFSET(0x8E5EB30)
#define CLASS_3_0AECE78A0888504E_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x8E5B1A0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_808402E5BCE70E60_OFFSET UNITYSDK_OFFSET(0x8E5B240)
#define CLASS_3_0AECE78A0888504E_METHOD_3_87F73A810E384798_OFFSET UNITYSDK_OFFSET(0x8E5D690)
#define CLASS_3_0AECE78A0888504E_METHOD_3_87F7DFC7FDA53D2D_OFFSET UNITYSDK_OFFSET(0x8E5E830)
#define CLASS_3_0AECE78A0888504E_METHOD_3_98451821114B9D62_OFFSET UNITYSDK_OFFSET(0x8E5C210)
#define CLASS_3_0AECE78A0888504E_METHOD_3_A3CA1727D80365BC_OFFSET UNITYSDK_OFFSET(0x8E5D5B0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_BAA81EDB15577597_OFFSET UNITYSDK_OFFSET(0x8E5B0D0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x8E5ECA0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8E5EAD0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8E5D550)
#define CLASS_3_0AECE78A0888504E_METHOD_3_E2A13B6BE7B1574D_OFFSET UNITYSDK_OFFSET(0x8E5F090)
#define CLASS_3_0AECE78A0888504E_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E591D0)
#define CLASS_3_0AECE78A0888504E__CTOR_OFFSET UNITYSDK_OFFSET(0x8E59500)

inline static constexpr unsigned int Class_3_0AECE78A0888504E_TypeDefinitionIndex = 65737;

class Class_3_0AECE78A0888504E : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0AECE78A0888504E_TypeDefinitionIndex)->GetStaticField(0xDDE0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_LATEUPDATEAGAIN_OFFSET))(this);
	}

	static ::System::Void Method_3_4617FA41BEC0E945(::Class_3_912CA5D103261DFB* a1, ::MoleMole::Config::CharacterAutoAimConfig* a2, ::PipelineCamera::WorldBasicCameraData& a3, ::Struct_2_8F09B36EC2E2FB2D& a4, ::Enum_3_A019F766F8C74696 a5)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*, ::MoleMole::Config::CharacterAutoAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::Struct_2_8F09B36EC2E2FB2D&, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_4617FA41BEC0E945_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_3_62FFA88589F1F6BE(::UnityEngine::Vector3 a1, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_62FFA88589F1F6BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_808402E5BCE70E60(::Class_3_BD1C1745FBC83F51* a1, ::Class_3_912CA5D103261DFB* a2)
	{
		return ((::System::Boolean(*)(::Class_3_BD1C1745FBC83F51*, ::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_808402E5BCE70E60_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_A3CA1727D80365BC(::Class_3_912CA5D103261DFB* a1)
	{
		return ((::System::Boolean(*)(::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_A3CA1727D80365BC_OFFSET))(a1);
	}

	static ::System::Void Method_3_2A77E68FCC7687A0(::Enum_3_0DE7EC2BC9304BF2 a1, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a2)
	{
		return ((::System::Void(*)(::Enum_3_0DE7EC2BC9304BF2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_2A77E68FCC7687A0_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_3A3C2E874E660E76(::Class_3_912CA5D103261DFB* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_912CA5D103261DFB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_3A3C2E874E660E76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_87F73A810E384798(::Class_3_912CA5D103261DFB* a1)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_87F73A810E384798_OFFSET))(a1);
	}

	static ::System::Void Method_3_4FA263546972185D(::Class_3_912CA5D103261DFB* a1)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_4FA263546972185D_OFFSET))(a1);
	}

	static ::System::Void Method_3_1E6E2B1163915FBE(::Class_3_912CA5D103261DFB* a1, ::System::Boolean a2, ::MoleMole::Cameras::OverShoulderCameraConfig* a3)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*, ::System::Boolean, ::MoleMole::Cameras::OverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_1E6E2B1163915FBE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_87F7DFC7FDA53D2D(::UnityEngine::Renderer* a1, ::Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_87F7DFC7FDA53D2D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_912CA5D103261DFB* a1)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_BAA81EDB15577597(::Struct_2_8F09B36EC2E2FB2D& a1, ::UnityEngine::Vector2 a2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a3)
	{
		return ((::System::Void(*)(::Struct_2_8F09B36EC2E2FB2D&, ::UnityEngine::Vector2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_BAA81EDB15577597_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_6E248FFA912961D2(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A& a4, ::Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF& a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A&, ::Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_6E248FFA912961D2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_98451821114B9D62(::Class_3_912CA5D103261DFB* a1, ::MoleMole::Config::CharacterAssistAimConfig* a2, ::PipelineCamera::WorldBasicCameraData& a3, ::Struct_2_8F09B36EC2E2FB2D& a4)
	{
		return ((::System::Void(*)(::Class_3_912CA5D103261DFB*, ::MoleMole::Config::CharacterAssistAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::Struct_2_8F09B36EC2E2FB2D&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_98451821114B9D62_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E2A13B6BE7B1574D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_E2A13B6BE7B1574D_OFFSET))(a1, a2);
	}
};
