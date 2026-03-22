#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED8DECFCACDA19E;
class Class_1_8FB027E4F0CF7ACD;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0xD377B80)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3_METHOD_1_64472CDD86BC7657_OFFSET UNITYSDK_OFFSET(0x745E660)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3__CTOR_OFFSET UNITYSDK_OFFSET(0xD377B70)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_0F725EF70D70D8B3_TypeDefinitionIndex = 69775;

class Class_1_8FB027E4F0CF7ACD_Class_1_0F725EF70D70D8B3 : public ::System::Object
{
public:
	::Class_1_7ED8DECFCACDA19E* Field_1_1; // 0x10
	::Class_1_8FB027E4F0CF7ACD* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_64472CDD86BC7657()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0F725EF70D70D8B3_METHOD_1_64472CDD86BC7657_OFFSET))(this);
	}
};
