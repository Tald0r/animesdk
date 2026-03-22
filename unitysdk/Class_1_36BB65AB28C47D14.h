#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_36BB65AB28C47D14_Enum_3_C780BFBFED223F30_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }

#define CLASS_1_36BB65AB28C47D14_METHOD_1_19F1BB11890A12EF_OFFSET UNITYSDK_OFFSET(0xBC741A0)
#define CLASS_1_36BB65AB28C47D14_METHOD_1_972A94DAC39DEA69_OFFSET UNITYSDK_OFFSET(0xBC74330)
#define CLASS_1_36BB65AB28C47D14_METHOD_1_9AB25BD9C7143B41_OFFSET UNITYSDK_OFFSET(0xBC748D0)
#define CLASS_1_36BB65AB28C47D14_METHOD_1_B62C76ED985CE536_OFFSET UNITYSDK_OFFSET(0xBC74B80)
#define CLASS_1_36BB65AB28C47D14_METHOD_1_CB22CB86B1EB91A3_OFFSET UNITYSDK_OFFSET(0xBC74570)
#define CLASS_1_36BB65AB28C47D14__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC74270)
#define CLASS_1_36BB65AB28C47D14__CTOR_OFFSET UNITYSDK_OFFSET(0xBC74010)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_TypeDefinitionIndex = 46132;

class Class_1_36BB65AB28C47D14 : public ::System::Object
{
public:
	static ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting** StaticGet_Field_1_2()
	{
		return (::PipelineCamera::CameraSequence::CameraSequenceBlendSetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36BB65AB28C47D14_TypeDefinitionIndex)->GetStaticField(0x3F540);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_3()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_36BB65AB28C47D14_TypeDefinitionIndex)->GetStaticField(0xFB90);
	}
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_1; // 0x10
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_36BB65AB28C47D14_Enum_3_C780BFBFED223F30_1>* Field_1_0; // 0x18

	::System::Void _ctor(::Struct_2_2CEE35A1FF4AE199& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_972A94DAC39DEA69(::Struct_2_2CEE35A1FF4AE199 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_2CEE35A1FF4AE199))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_METHOD_1_972A94DAC39DEA69_OFFSET))(a1);
	}

	::System::Void Method_1_CB22CB86B1EB91A3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_METHOD_1_CB22CB86B1EB91A3_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_9AB25BD9C7143B41(::Struct_2_2CEE35A1FF4AE199& a1)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::Struct_2_2CEE35A1FF4AE199&))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_METHOD_1_9AB25BD9C7143B41_OFFSET))(this, a1);
	}

	::System::Void Method_1_B62C76ED985CE536(::Struct_2_2CEE35A1FF4AE199& a1, ::PipelineCamera::CameraCommandSpawnSubModules*& a2, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2CEE35A1FF4AE199&, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_METHOD_1_B62C76ED985CE536_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_19F1BB11890A12EF(::Struct_2_2CEE35A1FF4AE199 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Struct_2_2CEE35A1FF4AE199))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_METHOD_1_19F1BB11890A12EF_OFFSET))(this, a1);
	}
};
