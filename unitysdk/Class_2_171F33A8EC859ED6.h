#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_4E1FD763A8B8D9C6.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_499;
namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole { class AdvancedCollisionConfigData; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_1_OFFSET UNITYSDK_OFFSET(0x94E48F0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_2_OFFSET UNITYSDK_OFFSET(0x94E5300)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_OFFSET UNITYSDK_OFFSET(0x94E4590)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_207A21270EC6D991_OFFSET UNITYSDK_OFFSET(0x94E3FA0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_40F18DBBCD7E2418_OFFSET UNITYSDK_OFFSET(0x94E4F20)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_642924277A8C33E3_OFFSET UNITYSDK_OFFSET(0x94E5060)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_1_OFFSET UNITYSDK_OFFSET(0x94E4B00)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_OFFSET UNITYSDK_OFFSET(0x94E4270)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_9DE511C768741E6E_1_OFFSET UNITYSDK_OFFSET(0x94E4E40)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_9DE511C768741E6E_OFFSET UNITYSDK_OFFSET(0x94E46D0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x94E4BD0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x94E4640)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x94E49C0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x94E49A0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x94E3F80)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x94E47C0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x94E4BB0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x94E4250)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x94E4C60)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x94E4310)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_1_OFFSET UNITYSDK_OFFSET(0x94E53B0)
#define CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x94E44E0)
#define CLASS_2_171F33A8EC859ED6__CTOR_OFFSET UNITYSDK_OFFSET(0x94E3E10)

inline static constexpr unsigned int Class_2_171F33A8EC859ED6_TypeDefinitionIndex = 64073;

class Class_2_171F33A8EC859ED6 : public ::PipelineCamera::CameraSequence::CameraSequenceContext
{
public:
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_2_15; // 0x60
	::Class_0_16E4307DCC419505_499* Field_2_14; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x70
	::Foundation::ReferenceValue_1<::System::Single>* Field_2_5; // 0x78
	::Class_0_16E4307DCC419505_499* Field_2_13; // 0x80
	::Foundation::ReferenceValue_1<::System::Single>* Field_2_7; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x90
	::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* Field_2_6; // 0x98
	::Nap::NapECS::EcsWorld* Field_2_0; // 0xA0
	::Struct_2_4E1FD763A8B8D9C6 Field_2_12; // 0xA8
	::System::Int32 Field_2_18; // 0xD0
	::PipelineCamera::WorldBasicCameraData Field_2_2; // 0xD4
	::Foundation::Unreal::FTransform Field_2_16; // 0x100
	::System::Single Field_2_17; // 0x120
	::Foundation::Unreal::FTransform Field_2_19; // 0x124
	::System::Single Field_2_20; // 0x144
	::System::Int32 Field_2_21; // 0x148
	::System::Single Field_2_10; // 0x14C
	::System::Single Field_2_1; // 0x150
	::System::Boolean Field_2_3; // 0x154
	::System::Boolean Field_2_4; // 0x155
	::System::Boolean Field_2_11; // 0x156

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_207A21270EC6D991()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_207A21270EC6D991_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_8EE6C10C77964FB6()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::UInt32 Method_2_9DE511C768741E6E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_9DE511C768741E6E_OFFSET))(this);
	}

	::System::Single Method_2_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D3CDDBF95A81E584_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Single Method_2_B67DCF72B717FA9F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_B67DCF72B717FA9F_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_8EE6C10C77964FB6_1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_8EE6C10C77964FB6_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_9DE511C768741E6E_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_9DE511C768741E6E_1_OFFSET))(this);
	}

	::MoleMole::AdvancedCollisionConfigData* Method_2_40F18DBBCD7E2418()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_40F18DBBCD7E2418_OFFSET))(this);
	}

	static ::System::Void Method_2_642924277A8C33E3(::Class_0_16E4307DCC419505_499* a1, ::Nap::NapECS::EcsWorld* a2, ::System::Int32& a3, ::Foundation::Unreal::FTransform& a4, ::System::Single& a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_499*, ::Nap::NapECS::EcsWorld*, ::System::Int32&, ::Foundation::Unreal::FTransform&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_642924277A8C33E3_OFFSET))(a1, a2, a3, a4, a5);
	}

	::UnityEngine::AnimationCurve* Method_2_037FB9129FA6685E_2()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_037FB9129FA6685E_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_171F33A8EC859ED6_METHOD_2_FA662896843C137A_1_OFFSET))(this);
	}
};
