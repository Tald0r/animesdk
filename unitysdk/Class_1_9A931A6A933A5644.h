#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9.h"
#include "unitysdk/Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_6804722D351945F3.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldScreenCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_171F33A8EC859ED6;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace MoleMole::LevelPerform { class LevelSettlementConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9A931A6A933A5644_METHOD_1_00B7769FC1F26D3B_OFFSET UNITYSDK_OFFSET(0x95E2850)
#define CLASS_1_9A931A6A933A5644_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x95DFA30)
#define CLASS_1_9A931A6A933A5644_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x95DF960)
#define CLASS_1_9A931A6A933A5644_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x95DF8C0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x95E0020)
#define CLASS_1_9A931A6A933A5644_METHOD_1_3DCF176932220B59_OFFSET UNITYSDK_OFFSET(0x95DF180)
#define CLASS_1_9A931A6A933A5644_METHOD_1_4BF20B62BF3CBAE1_OFFSET UNITYSDK_OFFSET(0x95DFDC0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_53FF1E4A93E77E17_OFFSET UNITYSDK_OFFSET(0x95E2C40)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_1_OFFSET UNITYSDK_OFFSET(0x95E27B0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_2_OFFSET UNITYSDK_OFFSET(0x95E2800)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_3_OFFSET UNITYSDK_OFFSET(0x95E2A70)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0x95E2490)
#define CLASS_1_9A931A6A933A5644_METHOD_1_7CF4DE68923F8BB3_OFFSET UNITYSDK_OFFSET(0x95E24E0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_82EBC0EFE501054A_OFFSET UNITYSDK_OFFSET(0x95E2650)
#define CLASS_1_9A931A6A933A5644_METHOD_1_8ACFF6FF08C733FF_OFFSET UNITYSDK_OFFSET(0x95E2300)
#define CLASS_1_9A931A6A933A5644_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0x95E2F00)
#define CLASS_1_9A931A6A933A5644_METHOD_1_AD7F47495BB63A24_OFFSET UNITYSDK_OFFSET(0x95DFE70)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B3E26B14FD2AD411_OFFSET UNITYSDK_OFFSET(0x95E0B60)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x95DEF30)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B870FBCE374AEC6C_OFFSET UNITYSDK_OFFSET(0x95DFFC0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_BDA4FFDFF3F74A1B_OFFSET UNITYSDK_OFFSET(0x95E1DB0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_D0CC456995EECFBE_OFFSET UNITYSDK_OFFSET(0x95E2AC0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x95E2FE0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_EF3D19C357AD772F_OFFSET UNITYSDK_OFFSET(0x95E1D20)
#define CLASS_1_9A931A6A933A5644__CCTOR_OFFSET UNITYSDK_OFFSET(0x95DFC80)
#define CLASS_1_9A931A6A933A5644__CTOR_OFFSET UNITYSDK_OFFSET(0x95DFC00)

inline static constexpr unsigned int Class_1_9A931A6A933A5644_TypeDefinitionIndex = 60081;

class Class_1_9A931A6A933A5644 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_1_13()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD40);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_11()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD48);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_16()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD50);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_12()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD58);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_14()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD60);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_15()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xBD68);
	}
	::System::Collections::Generic::List_1<::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9>* Field_1_9; // 0x10
	::MoleMole::LevelPerform::LevelSettlementConfig* Field_1_6; // 0x18
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x20
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9>* Field_1_7; // 0x28
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x30
	::System::Boolean Field_1_10; // 0x38
	::System::Boolean Field_1_3; // 0x39
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x3C
	::System::Int32 Field_1_8; // 0x44
	::System::Single Field_1_4; // 0x48
	::System::UInt32 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_4BF20B62BF3CBAE1(::Class_2_171F33A8EC859ED6* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_4BF20B62BF3CBAE1_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_AD7F47495BB63A24(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_AD7F47495BB63A24_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B870FBCE374AEC6C(::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_B870FBCE374AEC6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_171F33A8EC859ED6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677 Method_1_B3E26B14FD2AD411()
	{
		return ((::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_B3E26B14FD2AD411_OFFSET))(this);
	}

	::System::Void Method_1_EF3D19C357AD772F(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_EF3D19C357AD772F_OFFSET))(this, a1);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_BDA4FFDFF3F74A1B()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_BDA4FFDFF3F74A1B_OFFSET))(this);
	}

	::System::Void Method_1_8ACFF6FF08C733FF(::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_8ACFF6FF08C733FF_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_OFFSET))(this);
	}

	static ::PipelineCamera::WorldScreenCameraData Method_1_7CF4DE68923F8BB3(::PipelineCamera::FinalCameraData& a1, ::UnityEngine::Vector3& a2, ::PipelineCamera::WorldScreenCameraData& a3)
	{
		return ((::PipelineCamera::WorldScreenCameraData(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_7CF4DE68923F8BB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_82EBC0EFE501054A(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_82EBC0EFE501054A_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_70C856AE64234BE0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_1_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_00B7769FC1F26D3B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_00B7769FC1F26D3B_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_70C856AE64234BE0_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_3_OFFSET))(this);
	}

	static ::System::Void Method_1_D0CC456995EECFBE(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_D0CC456995EECFBE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3DCF176932220B59(::Nap::NapECS::EcsWorld*& a1, ::System::UInt32& a2, ::System::Nullable_1<::System::UInt32>& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*&, ::System::UInt32&, ::System::Nullable_1<::System::UInt32>&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_3DCF176932220B59_OFFSET))(a1, a2, a3, a4);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_53FF1E4A93E77E17(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_53FF1E4A93E77E17_OFFSET))(this, a1, a2);
	}

	::Enum_3_6804722D351945F3 Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_6804722D351945F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_AA24ACE6DC9948B7_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}
};
