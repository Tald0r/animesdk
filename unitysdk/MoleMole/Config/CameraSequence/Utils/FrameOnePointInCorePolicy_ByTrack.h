#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x81E6F50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GETDATA_OFFSET UNITYSDK_OFFSET(0x81E7110)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x81E8190)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_1C932F6AB6140BC6_OFFSET UNITYSDK_OFFSET(0x81E8830)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_32EA939E8F597EDB_1_OFFSET UNITYSDK_OFFSET(0x81E8D10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_32EA939E8F597EDB_OFFSET UNITYSDK_OFFSET(0x81E8A90)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x81E8A20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x81E8490)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_7BF10D4C7D9273A9_OFFSET UNITYSDK_OFFSET(0x81E8C30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_82BB2091A09B39AA_OFFSET UNITYSDK_OFFSET(0x81E8940)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_83ED25F6A8C66D20_1_OFFSET UNITYSDK_OFFSET(0x81E8F80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0x81E8EB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x81E83B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_C500A8EE2F15C0C3_OFFSET UNITYSDK_OFFSET(0x81E8550)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_DCDD4CB73FFCCA61_OFFSET UNITYSDK_OFFSET(0x81E8720)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_SETPATH_OFFSET UNITYSDK_OFFSET(0x81E6E90)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x81E82C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x81E81A0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex = 75988;

	class FrameOnePointInCorePolicy_ByTrack : public ::PipelineCamera::CameraSequence::FrameOnePointInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x10F40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ElevationRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x10F48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PolarAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x10F50);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_cameraOrbits()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x10F58);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x10F60);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet__orbitBufferInstance()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet__screenOffsetBufferInstance()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByTrack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* cameraOrbits; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* screenOffset; // 0x48
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* aspectRatio; // 0x50
		::System::Single fieldOfView; // 0x58
		::System::Single ElevationRatio; // 0x5C
		::System::Single PolarAngle; // 0x60
		::System::Boolean makeContextDependent; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GETDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		static ::System::Void Method_4_C500A8EE2F15C0C3(::System::Single a1, ::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3, ::UnityEngine::Vector2& a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Void(*)(::System::Single, ::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_C500A8EE2F15C0C3_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_4_82BB2091A09B39AA(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_82BB2091A09B39AA_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* Method_4_DCDD4CB73FFCCA61(::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)(::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_DCDD4CB73FFCCA61_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>* Method_4_7BF10D4C7D9273A9(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::CameraOrbit>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_7BF10D4C7D9273A9_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* Method_4_32EA939E8F597EDB()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_32EA939E8F597EDB_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* Method_4_1C932F6AB6140BC6(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_1C932F6AB6140BC6_OFFSET))(a1);
		}

		::System::Single Method_4_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>* Method_4_32EA939E8F597EDB_1()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector2>>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_32EA939E8F597EDB_1_OFFSET))();
		}

		::System::Single Method_4_83ED25F6A8C66D20_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYTRACK_METHOD_4_83ED25F6A8C66D20_1_OFFSET))(this, a1);
		}
	};
}
