#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD_METHOD_1_13F2D92E5B022E7E_OFFSET UNITYSDK_OFFSET(0x64543B0)
#define CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0x6454790)
#define CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x64543A0)

inline static constexpr unsigned int Class_2_C759BEB6ACFF9DF5_Class_1_B16CC7BFA1426DCD_TypeDefinitionIndex = 74755;

class Class_2_C759BEB6ACFF9DF5_Class_1_B16CC7BFA1426DCD : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_1; // 0x18
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_4; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_2; // 0x28
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_5; // 0x34
	::UnityEngine::LayerMask Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_13F2D92E5B022E7E(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD_METHOD_1_13F2D92E5B022E7E_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C759BEB6ACFF9DF5_CLASS_1_B16CC7BFA1426DCD_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}
};
