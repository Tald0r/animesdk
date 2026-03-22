#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_249;
namespace System { class String; }

#define CLASS_1_A53D69B1E3728228_METHOD_1_003DB6C3792138A8_OFFSET UNITYSDK_OFFSET(0x9683720)
#define CLASS_1_A53D69B1E3728228_METHOD_1_3852FA6A259275C9_OFFSET UNITYSDK_OFFSET(0x9682B40)
#define CLASS_1_A53D69B1E3728228_METHOD_1_75B3EF78C9978087_OFFSET UNITYSDK_OFFSET(0x9682EE0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_8D4060BFCA7B32AC_OFFSET UNITYSDK_OFFSET(0x96832F0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_1_OFFSET UNITYSDK_OFFSET(0x9682DC0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_2_OFFSET UNITYSDK_OFFSET(0x96831D0)
#define CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_OFFSET UNITYSDK_OFFSET(0x9682A20)

inline static constexpr unsigned int Class_1_A53D69B1E3728228_TypeDefinitionIndex = 39665;

class Class_1_A53D69B1E3728228 : public ::System::Object
{
public:
	static ::System::String* Method_1_ECA105CA81B6B39D(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3852FA6A259275C9(::Class_0_16E4307DCC419505_249* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_249*))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_3852FA6A259275C9_OFFSET))(a1);
	}

	static ::System::String* Method_1_ECA105CA81B6B39D_1(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_1_OFFSET))(a1);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_1_75B3EF78C9978087(::Cinemachine::CameraState& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_75B3EF78C9978087_OFFSET))(a1);
	}

	static ::System::String* Method_1_ECA105CA81B6B39D_2(::UnityEngine::Vector3& a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_ECA105CA81B6B39D_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_8D4060BFCA7B32AC(::Class_0_16E4307DCC419505_249* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_249*))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_8D4060BFCA7B32AC_OFFSET))(a1);
	}

	static ::Cinemachine::CameraState Method_1_003DB6C3792138A8(::Cinemachine::CameraState& a1, ::PipelineCamera::WorldBasicCameraData& a2)
	{
		return ((::Cinemachine::CameraState(*)(::Cinemachine::CameraState&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_A53D69B1E3728228_METHOD_1_003DB6C3792138A8_OFFSET))(a1, a2);
	}
};
