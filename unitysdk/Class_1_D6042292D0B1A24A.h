#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_B8984AF1CBDAAA93.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_D6042292D0B1A24A_METHOD_1_830DCCD506D1BED7_OFFSET UNITYSDK_OFFSET(0x6B7E040)
#define CLASS_1_D6042292D0B1A24A_METHOD_1_8495C1D22EB570A6_OFFSET UNITYSDK_OFFSET(0x6B7DD40)
#define CLASS_1_D6042292D0B1A24A_METHOD_1_A460378B3D17A828_OFFSET UNITYSDK_OFFSET(0x6B7DA80)
#define CLASS_1_D6042292D0B1A24A_METHOD_1_C2B529E7EE9A1FBF_OFFSET UNITYSDK_OFFSET(0x6B7D1F0)

inline static constexpr unsigned int Class_1_D6042292D0B1A24A_TypeDefinitionIndex = 70698;

class Class_1_D6042292D0B1A24A : public ::System::Object
{
public:
	static ::PipelineCamera::FinalCameraData Method_1_C2B529E7EE9A1FBF(::PipelineCamera::WorldBasicCameraData a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D6042292D0B1A24A_METHOD_1_C2B529E7EE9A1FBF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>* Method_1_A460378B3D17A828()
	{
		return ((::System::Func_2<::Struct_2_B8984AF1CBDAAA93, ::PipelineCamera::FinalCameraData>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6042292D0B1A24A_METHOD_1_A460378B3D17A828_OFFSET))();
	}

	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> Method_1_8495C1D22EB570A6(::System::UInt32 a1, ::Nap::NapECS::EcsWorld* a2, ::System::Func_1<::UnityEngine::Vector3>*& a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Func_1<::UnityEngine::Vector3>*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D6042292D0B1A24A_METHOD_1_8495C1D22EB570A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_830DCCD506D1BED7(::UnityEngine::Collider* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D6042292D0B1A24A_METHOD_1_830DCCD506D1BED7_OFFSET))(a1, a2);
	}
};
