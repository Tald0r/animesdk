#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraTimestamp; }

#define PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x17C71700)
#define PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C715E0)
#define PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x17C71830)
#define PIPELINECAMERA_DEFAULTCAMERATIMESTAMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C71970)
#define PIPELINECAMERA_DEFAULTCAMERATIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x17C71960)

namespace PipelineCamera
{
	inline static constexpr unsigned int DefaultCameraTimestamp_TypeDefinitionIndex = 34384;

	class DefaultCameraTimestamp : public ::System::Object
	{
	public:
		static ::PipelineCamera::ICameraTimestamp** StaticGet_Instance()
		{
			return (::PipelineCamera::ICameraTimestamp**)Il2CppClass::FromTypeDefinitionIndex(DefaultCameraTimestamp_TypeDefinitionIndex)->GetStaticField(0x24A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEFAULTCAMERATIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEFAULTCAMERATIMESTAMP__CCTOR_OFFSET))();
		}

		::System::Double PipelineCamera_ICameraTimestamp_GetTimestamp(::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Double(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_GETTIMESTAMP_OFFSET))(this, context);
		}

		::System::Single PipelineCamera_ICameraTimestamp_GetDeltaTime(::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_GETDELTATIME_OFFSET))(this, context);
		}

		::System::Boolean PipelineCamera_ICameraTimestamp_IsThreadSafeInWorkThread(::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEFAULTCAMERATIMESTAMP_PIPELINECAMERA_ICAMERATIMESTAMP_ISTHREADSAFEINWORKTHREAD_OFFSET))(this, context);
		}
	};
}
