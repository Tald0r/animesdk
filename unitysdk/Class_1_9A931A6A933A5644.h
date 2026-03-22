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

#define CLASS_1_9A931A6A933A5644_METHOD_1_00B7769FC1F26D3B_OFFSET UNITYSDK_OFFSET(0x78381C0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x7837E30)
#define CLASS_1_9A931A6A933A5644_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x7837D60)
#define CLASS_1_9A931A6A933A5644_METHOD_1_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x7837CD0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x78383F0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_3DCF176932220B59_OFFSET UNITYSDK_OFFSET(0x7837580)
#define CLASS_1_9A931A6A933A5644_METHOD_1_4BF20B62BF3CBAE1_OFFSET UNITYSDK_OFFSET(0x783B160)
#define CLASS_1_9A931A6A933A5644_METHOD_1_53FF1E4A93E77E17_OFFSET UNITYSDK_OFFSET(0x783B210)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_1_OFFSET UNITYSDK_OFFSET(0x783A590)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_2_OFFSET UNITYSDK_OFFSET(0x783A5E0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_3_OFFSET UNITYSDK_OFFSET(0x783A710)
#define CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0x7838F60)
#define CLASS_1_9A931A6A933A5644_METHOD_1_7CF4DE68923F8BB3_OFFSET UNITYSDK_OFFSET(0x783A760)
#define CLASS_1_9A931A6A933A5644_METHOD_1_82EBC0EFE501054A_OFFSET UNITYSDK_OFFSET(0x783A8D0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_8ACFF6FF08C733FF_OFFSET UNITYSDK_OFFSET(0x783A400)
#define CLASS_1_9A931A6A933A5644_METHOD_1_AA24ACE6DC9948B7_OFFSET UNITYSDK_OFFSET(0x783A630)
#define CLASS_1_9A931A6A933A5644_METHOD_1_AD7F47495BB63A24_OFFSET UNITYSDK_OFFSET(0x783AA30)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B3E26B14FD2AD411_OFFSET UNITYSDK_OFFSET(0x7839010)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x7837340)
#define CLASS_1_9A931A6A933A5644_METHOD_1_B870FBCE374AEC6C_OFFSET UNITYSDK_OFFSET(0x7838FB0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_BDA4FFDFF3F74A1B_OFFSET UNITYSDK_OFFSET(0x783AB80)
#define CLASS_1_9A931A6A933A5644_METHOD_1_D0CC456995EECFBE_OFFSET UNITYSDK_OFFSET(0x783A280)
#define CLASS_1_9A931A6A933A5644_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x783B0C0)
#define CLASS_1_9A931A6A933A5644_METHOD_1_EF3D19C357AD772F_OFFSET UNITYSDK_OFFSET(0x783A1F0)
#define CLASS_1_9A931A6A933A5644__CCTOR_OFFSET UNITYSDK_OFFSET(0x7838080)
#define CLASS_1_9A931A6A933A5644__CTOR_OFFSET UNITYSDK_OFFSET(0x7838000)

inline static constexpr unsigned int Class_1_9A931A6A933A5644_TypeDefinitionIndex = 74846;

class Class_1_9A931A6A933A5644 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_1_13()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAEB0);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_15()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAEB8);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_11()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAEC0);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_12()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAEC8);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_16()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAED0);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_1_14()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A931A6A933A5644_TypeDefinitionIndex)->GetStaticField(0xAED8);
	}
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_1_5; // 0x10
	::MoleMole::LevelPerform::LevelSettlementConfig* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9>* Field_1_9; // 0x20
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x28
	::MoleMole::Utils::TaskBasedEventCollection_1<::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9>* Field_1_7; // 0x30
	::System::Boolean Field_1_10; // 0x38
	::System::Boolean Field_1_3; // 0x39
	::System::Single Field_1_4; // 0x3C
	::System::UInt32 Field_1_1; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x48

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

	static ::System::Boolean Method_1_00B7769FC1F26D3B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_00B7769FC1F26D3B_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_323DCA18419DFB89(::Class_2_171F33A8EC859ED6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_OFFSET))(this);
	}

	::System::Void Method_1_B870FBCE374AEC6C(::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A931A6A933A5644_Enum_3_25EB483A5873DAA9))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_B870FBCE374AEC6C_OFFSET))(this, a1);
	}

	::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677 Method_1_B3E26B14FD2AD411()
	{
		return ((::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_B3E26B14FD2AD411_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_1_EF3D19C357AD772F(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_EF3D19C357AD772F_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_D0CC456995EECFBE(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_D0CC456995EECFBE_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8ACFF6FF08C733FF(::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_8ACFF6FF08C733FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_3DCF176932220B59(::Nap::NapECS::EcsWorld*& a1, ::System::UInt32& a2, ::System::Nullable_1<::System::UInt32>& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*&, ::System::UInt32&, ::System::Nullable_1<::System::UInt32>&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_3DCF176932220B59_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_70C856AE64234BE0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_2_OFFSET))(this);
	}

	::Enum_3_6804722D351945F3 Method_1_AA24ACE6DC9948B7()
	{
		return ((::Enum_3_6804722D351945F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_AA24ACE6DC9948B7_OFFSET))(this);
	}

	::System::Void Method_1_70C856AE64234BE0_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_70C856AE64234BE0_3_OFFSET))(this);
	}

	static ::PipelineCamera::WorldScreenCameraData Method_1_7CF4DE68923F8BB3(::PipelineCamera::FinalCameraData& a1, ::UnityEngine::Vector3& a2, ::PipelineCamera::WorldScreenCameraData& a3)
	{
		return ((::PipelineCamera::WorldScreenCameraData(*)(::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector3&, ::PipelineCamera::WorldScreenCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_7CF4DE68923F8BB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_82EBC0EFE501054A(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_82EBC0EFE501054A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD7F47495BB63A24(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677& a2)
	{
		return ((::System::Void(*)(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677&))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_AD7F47495BB63A24_OFFSET))(a1, a2);
	}

	::PipelineCamera::ScopedDelegateHandle Method_1_BDA4FFDFF3F74A1B()
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_BDA4FFDFF3F74A1B_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_4BF20B62BF3CBAE1(::Class_2_171F33A8EC859ED6* a1, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_171F33A8EC859ED6*, ::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_4BF20B62BF3CBAE1_OFFSET))(this, a1, a2);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_53FF1E4A93E77E17(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_METHOD_1_53FF1E4A93E77E17_OFFSET))(this, a1, a2);
	}
};
