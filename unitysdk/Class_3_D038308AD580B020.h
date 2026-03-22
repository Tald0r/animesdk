#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LoseButtonTrigger.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingFogEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingScreenEffect.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class Class_1_8289F2785D9AA990;
class Class_1_FA793AB1D49D0132;
namespace Foundation { class FunctionalObject; }
namespace MoleMole { class MonoUIGameObjectNumber; }
namespace MoleMole { class UILevelGeneralFailedResultDialogPopWindowController; }
namespace MoleMole { class UILevelResultPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D038308AD580B020_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x5EAB360)
#define CLASS_3_D038308AD580B020_METHOD_3_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0x5EA6600)
#define CLASS_3_D038308AD580B020_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x5EA9CF0)
#define CLASS_3_D038308AD580B020_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x5EA8250)
#define CLASS_3_D038308AD580B020_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x5EAF800)
#define CLASS_3_D038308AD580B020_METHOD_3_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x5EAA0D0)
#define CLASS_3_D038308AD580B020_METHOD_3_261DF843E298B71B_1_OFFSET UNITYSDK_OFFSET(0x5EAC9D0)
#define CLASS_3_D038308AD580B020_METHOD_3_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x5EA9C50)
#define CLASS_3_D038308AD580B020_METHOD_3_2B3BCCEC133C77C0_OFFSET UNITYSDK_OFFSET(0x5EA7280)
#define CLASS_3_D038308AD580B020_METHOD_3_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x5EACE90)
#define CLASS_3_D038308AD580B020_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x5EAE850)
#define CLASS_3_D038308AD580B020_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x5EA5060)
#define CLASS_3_D038308AD580B020_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x5EA5BC0)
#define CLASS_3_D038308AD580B020_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x5EAFD50)
#define CLASS_3_D038308AD580B020_METHOD_3_47CDDACA9A031BCE_OFFSET UNITYSDK_OFFSET(0x5EA8890)
#define CLASS_3_D038308AD580B020_METHOD_3_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x5EAA650)
#define CLASS_3_D038308AD580B020_METHOD_3_489B506CDCF48995_OFFSET UNITYSDK_OFFSET(0x5EAA440)
#define CLASS_3_D038308AD580B020_METHOD_3_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x5EAE0A0)
#define CLASS_3_D038308AD580B020_METHOD_3_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0x5EA5D50)
#define CLASS_3_D038308AD580B020_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x5EA5260)
#define CLASS_3_D038308AD580B020_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x5EB1520)
#define CLASS_3_D038308AD580B020_METHOD_3_5A1A173D62C358A1_OFFSET UNITYSDK_OFFSET(0x5EAF2B0)
#define CLASS_3_D038308AD580B020_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x5EA89F0)
#define CLASS_3_D038308AD580B020_METHOD_3_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x5EB1B60)
#define CLASS_3_D038308AD580B020_METHOD_3_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x5EAD0C0)
#define CLASS_3_D038308AD580B020_METHOD_3_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x5EAC3F0)
#define CLASS_3_D038308AD580B020_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x5EA6F30)
#define CLASS_3_D038308AD580B020_METHOD_3_6E96687770230420_OFFSET UNITYSDK_OFFSET(0x5EA9550)
#define CLASS_3_D038308AD580B020_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x5EACF10)
#define CLASS_3_D038308AD580B020_METHOD_3_78DFF70C3D8B8692_OFFSET UNITYSDK_OFFSET(0x5EA71F0)
#define CLASS_3_D038308AD580B020_METHOD_3_8049B22E1B5C85D4_OFFSET UNITYSDK_OFFSET(0x5EAEC70)
#define CLASS_3_D038308AD580B020_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x5EB12B0)
#define CLASS_3_D038308AD580B020_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x5EAF730)
#define CLASS_3_D038308AD580B020_METHOD_3_88E463622048DAFC_OFFSET UNITYSDK_OFFSET(0x5EA5450)
#define CLASS_3_D038308AD580B020_METHOD_3_89E0F6701617D19F_OFFSET UNITYSDK_OFFSET(0x5EAC2F0)
#define CLASS_3_D038308AD580B020_METHOD_3_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x5EAA5D0)
#define CLASS_3_D038308AD580B020_METHOD_3_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x5EAE420)
#define CLASS_3_D038308AD580B020_METHOD_3_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x5EADCA0)
#define CLASS_3_D038308AD580B020_METHOD_3_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x5EA6110)
#define CLASS_3_D038308AD580B020_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x5EA74E0)
#define CLASS_3_D038308AD580B020_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x5EACA70)
#define CLASS_3_D038308AD580B020_METHOD_3_98C061072167BC0A_OFFSET UNITYSDK_OFFSET(0x5EB14A0)
#define CLASS_3_D038308AD580B020_METHOD_3_9A5BD45F61E22111_OFFSET UNITYSDK_OFFSET(0x5EA83C0)
#define CLASS_3_D038308AD580B020_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x5EA9AE0)
#define CLASS_3_D038308AD580B020_METHOD_3_A5E19EDC6E372FB1_OFFSET UNITYSDK_OFFSET(0x5EA7460)
#define CLASS_3_D038308AD580B020_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x5EA6290)
#define CLASS_3_D038308AD580B020_METHOD_3_AFF644DFAC6DDCF9_OFFSET UNITYSDK_OFFSET(0x5EB0D10)
#define CLASS_3_D038308AD580B020_METHOD_3_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x5EAD6C0)
#define CLASS_3_D038308AD580B020_METHOD_3_B123F353A2A19AEE_OFFSET UNITYSDK_OFFSET(0x5EAAC80)
#define CLASS_3_D038308AD580B020_METHOD_3_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x5EA7570)
#define CLASS_3_D038308AD580B020_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x5EB18F0)
#define CLASS_3_D038308AD580B020_METHOD_3_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x5EA7BF0)
#define CLASS_3_D038308AD580B020_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x5EB1BE0)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x5EAEC10)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x5EAF740)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x5EAF7A0)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x5EB1430)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x5EB1B00)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x5EB1BF0)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0x5EB1CF0)
#define CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5EA5B50)
#define CLASS_3_D038308AD580B020_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x5EA5FD0)
#define CLASS_3_D038308AD580B020_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x5EACF80)
#define CLASS_3_D038308AD580B020_METHOD_3_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x5EACBE0)
#define CLASS_3_D038308AD580B020_METHOD_3_D3109C64AA0A5F3C_OFFSET UNITYSDK_OFFSET(0x5EAA2B0)
#define CLASS_3_D038308AD580B020_METHOD_3_D567DE0AF488222D_OFFSET UNITYSDK_OFFSET(0x5EAADB0)
#define CLASS_3_D038308AD580B020_METHOD_3_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x5EB1C50)
#define CLASS_3_D038308AD580B020_METHOD_3_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x5EAD9D0)
#define CLASS_3_D038308AD580B020_METHOD_3_E7AD711897F156CD_OFFSET UNITYSDK_OFFSET(0x5EB0820)
#define CLASS_3_D038308AD580B020_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x5EAE1E0)
#define CLASS_3_D038308AD580B020_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x5EAFD40)
#define CLASS_3_D038308AD580B020_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x5EA5250)
#define CLASS_3_D038308AD580B020_METHOD_3_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x5EA9190)
#define CLASS_3_D038308AD580B020_METHOD_3_F775BA447C292087_OFFSET UNITYSDK_OFFSET(0x5EAFE30)
#define CLASS_3_D038308AD580B020_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x5EB12A0)
#define CLASS_3_D038308AD580B020_METHOD_3_FF03F8A57CA024D5_OFFSET UNITYSDK_OFFSET(0x5EA9760)
#define CLASS_3_D038308AD580B020__CCTOR_OFFSET UNITYSDK_OFFSET(0x5EAEB90)
#define CLASS_3_D038308AD580B020__CTOR_OFFSET UNITYSDK_OFFSET(0x5EAEA20)

inline static constexpr unsigned int Class_3_D038308AD580B020_TypeDefinitionIndex = 47379;

class Class_3_D038308AD580B020 : public ::Class_2_AA9239F66AD90F88_2<::Class_3_D038308AD580B020*>
{
public:
	static ::Foundation::Unreal::FName* StaticGet_Field_3_3()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020_TypeDefinitionIndex)->GetStaticField(0x10110);
	}
	static ::Foundation::Unreal::FName* StaticGet_Field_3_2()
	{
		return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D038308AD580B020_TypeDefinitionIndex)->GetStaticField(0x10118);
	}
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_22; // 0x0
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::String* Field_3_24; // 0x0
	// static const ::System::String* Field_3_25; // 0x0
	// static const ::System::String* Field_3_26; // 0x0
	// static const ::System::String* Field_3_27; // 0x0
	// static const ::System::String* Field_3_28; // 0x0
	::MoleMole::UILevelResultPageContext* Field_3_9; // 0x20
	::Class_1_8289F2785D9AA990* Field_3_5; // 0x28
	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* Field_3_32; // 0x30
	::System::Action* Field_3_31; // 0x38
	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* Field_3_10; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_19; // 0x48
	::MoleMole::EntityHandle Field_3_7; // 0x50
	::MoleMole::MonoUIGameObjectNumber* Field_3_8; // 0x60
	::Foundation::FunctionalObject* Field_3_33; // 0x68
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* Field_3_18; // 0x70
	::System::Boolean Field_3_12; // 0x78
	::System::Boolean Field_3_16; // 0x79
	::System::Boolean Field_3_11; // 0x7A
	::System::Single Field_3_29; // 0x7C
	::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger Field_3_34; // 0x80
	::System::Single Field_3_15; // 0x84
	::System::Int32 Field_3_14; // 0x88
	::System::Int32 Field_3_6; // 0x8C
	::Foundation::Coroutine::CoroutineHandle Field_3_13; // 0x90
	::System::Single Field_3_30; // 0x94
	::System::Boolean Field_3_17; // 0x98
	::System::Boolean Field_3_1; // 0x99
	::System::Boolean Field_3_4; // 0x9A
	::System::Boolean Field_3_21; // 0x9B
	::System::Single Field_3_20; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020__CCTOR_OFFSET))();
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_3_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_3_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::MoleMole::UILevelGeneralFailedResultDialogPopWindowController* Method_3_D3109C64AA0A5F3C(::MoleMole::UILevelResultPageContext* a1, ::Class_1_FA793AB1D49D0132* a2)
	{
		return ((::MoleMole::UILevelGeneralFailedResultDialogPopWindowController*(*)(::PVOID, ::MoleMole::UILevelResultPageContext*, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D3109C64AA0A5F3C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_489B506CDCF48995(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_489B506CDCF48995_OFFSET))(this, a1);
	}

	::System::Void Method_3_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_3_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
	}

	::Foundation::Unreal::Interval_1<::System::Single> Method_3_89E0F6701617D19F()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_89E0F6701617D19F_OFFSET))(this);
	}

	::System::Void Method_3_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_3_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_3_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_8A3E316C82E9B764_OFFSET))(this, a1);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_FF03F8A57CA024D5(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_FF03F8A57CA024D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_9A5BD45F61E22111(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_9A5BD45F61E22111_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_0BD490DFD500C054_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8049B22E1B5C85D4(::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_8049B22E1B5C85D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_2B3BCCEC133C77C0(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_2B3BCCEC133C77C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_3_A5E19EDC6E372FB1(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_A5E19EDC6E372FB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_3_88E463622048DAFC(::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_88E463622048DAFC_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_18982EFD3B740683_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_261DF843E298B71B_OFFSET))(this);
	}

	::System::Void Method_3_47CDDACA9A031BCE(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_47CDDACA9A031BCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	static ::PipelineCamera::WorldBasicCameraData Method_3_F775BA447C292087(::PipelineCamera::WorldBasicCameraData& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_F775BA447C292087_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_3_AFF644DFAC6DDCF9(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_AFF644DFAC6DDCF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_3_5A1A173D62C358A1(::MoleMole::EntityHandle a1, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigLevelResultPerforms_LoseButtonTrigger))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_5A1A173D62C358A1_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* Method_3_78DFF70C3D8B8692()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_78DFF70C3D8B8692_OFFSET))(this);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_3_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_3_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_E7AD711897F156CD(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Boolean(*)(::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_E7AD711897F156CD_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_6E96687770230420(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_6E96687770230420_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig Method_3_B123F353A2A19AEE()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_B123F353A2A19AEE_OFFSET))(this);
	}

	::System::Void Method_3_98C061072167BC0A(::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_98C061072167BC0A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_3_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_3_D567DE0AF488222D(::PipelineCamera::CameraSequence::CoreDataCollection* a1, ::PipelineCamera::CameraSequence::CoreDataBindingResolver* a2, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*, ::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D567DE0AF488222D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_261DF843E298B71B_1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_261DF843E298B71B_1_OFFSET))(this);
	}

	::System::Void Method_3_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_3_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Boolean Method_3_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_CA373AA1C7054598_7_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D038308AD580B020_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}
};
