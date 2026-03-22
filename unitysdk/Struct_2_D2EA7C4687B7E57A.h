#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_D2EA7C4687B7E57A_METHOD_2_9F83A8227A543A07_OFFSET UNITYSDK_OFFSET(0x19C1E550)
#define STRUCT_2_D2EA7C4687B7E57A_METHOD_2_E4254673D05762A3_OFFSET UNITYSDK_OFFSET(0x8EE4A0)
#define STRUCT_2_D2EA7C4687B7E57A__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE460)

inline static constexpr unsigned int Struct_2_D2EA7C4687B7E57A_TypeDefinitionIndex = 43080;

struct alignas(8) Struct_2_D2EA7C4687B7E57A
{
	::PipelineCamera::WorldBasicCameraDeltaData Field_2_0; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* Field_2_1; // 0x48
	::System::Boolean Field_2_2; // 0x50
	::System::Func_1<::System::Single>* Field_2_3; // 0x58
	::System::Single Field_2_4; // 0x60

	::System::Void _ctor(::PipelineCamera::WorldBasicCameraDeltaData& a1, ::System::Func_1<::System::Single>* a2, ::PipelineCamera::TimeBasedAlphaGenerator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDeltaData&, ::System::Func_1<::System::Single>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + STRUCT_2_D2EA7C4687B7E57A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Nullable_1<::Struct_2_D2EA7C4687B7E57A> Method_2_E4254673D05762A3(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::WorldBasicCameraData& a3)
	{
		return ((::System::Nullable_1<::Struct_2_D2EA7C4687B7E57A>(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_D2EA7C4687B7E57A_METHOD_2_E4254673D05762A3_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	static ::System::Nullable_1<::Struct_2_D2EA7C4687B7E57A> Method_2_9F83A8227A543A07(::System::Single a1, ::Struct_2_455336A079B58DD3& a2, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>& a3, ::PipelineCamera::WorldBasicCameraData& a4)
	{
		return ((::System::Nullable_1<::Struct_2_D2EA7C4687B7E57A>(*)(::System::Single, ::Struct_2_455336A079B58DD3&, ::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_D2EA7C4687B7E57A_METHOD_2_9F83A8227A543A07_OFFSET))(a1, a2, a3, a4);
	}
	*/
};
