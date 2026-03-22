#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_36BB65AB28C47D14;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_13F2D92E5B022E7E_OFFSET UNITYSDK_OFFSET(0xA2BBC00)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_68D3C9BCD843A33F_OFFSET UNITYSDK_OFFSET(0xA2BBFE0)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_932E3529F419462C_OFFSET UNITYSDK_OFFSET(0xA2BC150)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BBBF0)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_5640E59956CCD7F1_TypeDefinitionIndex = 46137;

class Class_1_36BB65AB28C47D14_Class_1_5640E59956CCD7F1 : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_4; // 0x10
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_2; // 0x18
	::Class_1_36BB65AB28C47D14* Field_1_7; // 0x20
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* Field_1_0; // 0x28
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_1; // 0x30
	::System::Single Field_1_6; // 0x38
	::UnityEngine::LayerMask Field_1_3; // 0x3C
	::System::Single Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_13F2D92E5B022E7E(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_13F2D92E5B022E7E_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_68D3C9BCD843A33F()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_68D3C9BCD843A33F_OFFSET))(this);
	}

	::System::Void Method_1_932E3529F419462C(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_5640E59956CCD7F1_METHOD_1_932E3529F419462C_OFFSET))(this, a1);
	}
};
