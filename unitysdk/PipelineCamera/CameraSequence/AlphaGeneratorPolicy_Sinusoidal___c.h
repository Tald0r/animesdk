#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30D3F0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30D430)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__GETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A30D440)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex = 35734;

	class AlphaGeneratorPolicy_Sinusoidal___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::AlphaGeneratorPolicy_Sinusoidal___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::AlphaGeneratorPolicy_Sinusoidal___c**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex)->GetStaticField(0x264F0);
		}
		static ::System::Func_2<::System::Single, ::Foundation::Function::Sinusoidal>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Single, ::Foundation::Function::Sinusoidal>**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex)->GetStaticField(0x264F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CTOR_OFFSET))(this);
		}

		::Foundation::Function::Sinusoidal _GetData_b__7_0(::System::Single p)
		{
			return ((::Foundation::Function::Sinusoidal(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__GETDATA_B__7_0_OFFSET))(this, p);
		}
	};
}
