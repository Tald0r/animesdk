#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C1C5EA29EA03C80E.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_183;
class Class_1_181A04F78EA47987;
class Class_1_F22D9EE165F4F112;
class Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ConfigUILightParam; }
namespace MoleMole { class MonoBasePerpStage; }
namespace MoleMole { class MonoCurveMoveObject; }
namespace MoleMole { class MonoDestructionObject; }
namespace MoleMole { class MonoEntity; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoInterestPoint; }
namespace MoleMole { class MonoMainCityObject; }
namespace MoleMole { class MonoPartySceneObject; }
namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole { class MonoSimpleRigidbodyObject; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole { class MonoVehicleObject; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::Config { class StageEntry; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_67FC18D32B1D1BAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD82450)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_0258BA084D53B209_OFFSET UNITYSDK_OFFSET(0xBD86390)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_06ACA01A6726AC56_OFFSET UNITYSDK_OFFSET(0xBD83C60)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xBD835A0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xBD84390)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_1510EAA5118F717B_OFFSET UNITYSDK_OFFSET(0xBD84190)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_15F882260A7A661D_OFFSET UNITYSDK_OFFSET(0xBD86C80)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0xBD850D0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_1BA069DCC8117F05_OFFSET UNITYSDK_OFFSET(0xBD82640)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_1E440C76F9E1E1B9_OFFSET UNITYSDK_OFFSET(0xBD85C90)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0xBD83D70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_251996A7C3B3258E_OFFSET UNITYSDK_OFFSET(0xBD83B60)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_2E0E365A814D7D0A_OFFSET UNITYSDK_OFFSET(0xBD825D0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_38D1436661ACE062_OFFSET UNITYSDK_OFFSET(0xBD83E80)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBD86CA0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_3C0B7DC83DEC5C77_OFFSET UNITYSDK_OFFSET(0xBD85B70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_3EB5C5E53F66CEB2_OFFSET UNITYSDK_OFFSET(0xBD82BC0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0xBD82760)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBD84E70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_43E9A417C0921572_OFFSET UNITYSDK_OFFSET(0xBD84680)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_4A3D71F1A28A6B42_OFFSET UNITYSDK_OFFSET(0xBD82820)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_4A3FABA7B39F6DC5_OFFSET UNITYSDK_OFFSET(0xBD85DE0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xBD86B70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_502073A99F30AC35_OFFSET UNITYSDK_OFFSET(0xBD86380)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_55D8E03B11FB1632_OFFSET UNITYSDK_OFFSET(0xBD82890)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_5688C364EF088870_OFFSET UNITYSDK_OFFSET(0xBD82990)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_5B8FCC60A2E67688_OFFSET UNITYSDK_OFFSET(0xBD843A0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0xBD85F00)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_68CD8E699DC19E7A_OFFSET UNITYSDK_OFFSET(0xBD84690)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_6AB1147B0A202D95_OFFSET UNITYSDK_OFFSET(0xBD83F70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_7809FA5C89001662_OFFSET UNITYSDK_OFFSET(0xBD86080)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xBD84670)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_8883AC11AC96FE8C_OFFSET UNITYSDK_OFFSET(0xBD838E0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_9043D1136AE90971_OFFSET UNITYSDK_OFFSET(0xBD84A60)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_905302C15794E3CD_OFFSET UNITYSDK_OFFSET(0xBD84FB0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xBD86D10)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_9327B0917271DE71_OFFSET UNITYSDK_OFFSET(0xBD824B0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_9789C70DDD6E4966_OFFSET UNITYSDK_OFFSET(0xBD84930)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_98F592F022876BA4_OFFSET UNITYSDK_OFFSET(0xBD84B80)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_9C89E670A8DEFF07_OFFSET UNITYSDK_OFFSET(0xBD84FD0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0xBD869F0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0xBD84FC0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_BC6760B599CAC79F_OFFSET UNITYSDK_OFFSET(0xBD83A40)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0xBD84950)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_C414B848449088FB_OFFSET UNITYSDK_OFFSET(0xBD84510)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_C7F8BCB95B0B87EE_OFFSET UNITYSDK_OFFSET(0xBD86C90)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBD823F0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xBD83350)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD82390)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_D4B8CA172558A550_OFFSET UNITYSDK_OFFSET(0xBD85650)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_DF8DA5BF16771AC1_OFFSET UNITYSDK_OFFSET(0xBD842D0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_E06F206E13D01A1D_OFFSET UNITYSDK_OFFSET(0xBD86280)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0xBD833C0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_E8CEC0D9ECB9B4FE_OFFSET UNITYSDK_OFFSET(0xBD834A0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_E988D7238099F972_OFFSET UNITYSDK_OFFSET(0xBD83110)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_EA766274F7EED335_OFFSET UNITYSDK_OFFSET(0xBD84070)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_EB617256E74DC075_OFFSET UNITYSDK_OFFSET(0xBD837C0)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_EB6CEA37242D192B_OFFSET UNITYSDK_OFFSET(0xBD84790)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_ECB73F4FFAAF20C8_OFFSET UNITYSDK_OFFSET(0xBD82A90)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_F626245813283B0B_OFFSET UNITYSDK_OFFSET(0xBD84940)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_F7D9D27F7F7223BA_OFFSET UNITYSDK_OFFSET(0xBD84660)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_FBCAF36A7FA06E45_OFFSET UNITYSDK_OFFSET(0xBD84D70)
#define CLASS_2_67FC18D32B1D1BAF_METHOD_2_FF6CB93DCC7D8770_OFFSET UNITYSDK_OFFSET(0xBD83C70)
#define CLASS_2_67FC18D32B1D1BAF_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBD82330)
#define CLASS_2_67FC18D32B1D1BAF__CTOR_OFFSET UNITYSDK_OFFSET(0xBD82260)

inline static constexpr unsigned int Class_2_67FC18D32B1D1BAF_TypeDefinitionIndex = 59251;

class Class_2_67FC18D32B1D1BAF : public ::Foundation::SingletonDisposable_1<::Class_2_67FC18D32B1D1BAF*>
{
public:
	::MoleMole::MonoBasePerpStage* Field_2_4; // 0x10
	::System::Action* Field_2_10; // 0x18
	::UnityEngine::Light* Field_2_8; // 0x20
	::UnityEngine::Rendering::Volume* Field_2_15; // 0x28
	::MoleMole::ConfigUILightParam* Field_2_14; // 0x30
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_2_11; // 0x38
	::MoleMole::Battle::Entity* Field_2_6; // 0x40
	::MoleMole::Config::StageEntry* Field_2_3; // 0x48
	::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5* Field_2_12; // 0x50
	::UnityEngine::Transform* Field_2_9; // 0x58
	::UnityEngine::Light* Field_2_7; // 0x60
	::MoleMole::Config::SceneConfigRuntimeData* Field_2_13; // 0x68
	::MoleMole::MonoStageEnv* Field_2_5; // 0x70
	::System::String* Field_2_0; // 0x78
	::System::String* Field_2_2; // 0x80
	::Enum_3_C1C5EA29EA03C80E Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* Method_2_9327B0917271DE71()
	{
		return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_9327B0917271DE71_OFFSET))(this);
	}

	::System::Void Method_2_2E0E365A814D7D0A(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_2E0E365A814D7D0A_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* Method_2_1BA069DCC8117F05()
	{
		return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_1BA069DCC8117F05_OFFSET))(this);
	}

	::System::Boolean Method_2_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_42DB5D19EEAC74D5_OFFSET))(this);
	}

	::System::Void Method_2_4A3D71F1A28A6B42(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_4A3D71F1A28A6B42_OFFSET))(this, a1);
	}

	::Class_1_F22D9EE165F4F112* Method_2_55D8E03B11FB1632(::System::String* a1)
	{
		return ((::Class_1_F22D9EE165F4F112*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_55D8E03B11FB1632_OFFSET))(this, a1);
	}

	::MoleMole::MonoSpawnPoint* Method_2_5688C364EF088870(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_5688C364EF088870_OFFSET))(this, a1);
	}

	::System::Void Method_2_ECB73F4FFAAF20C8(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_ECB73F4FFAAF20C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E988D7238099F972(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_E988D7238099F972_OFFSET))(this, a1);
	}

	::Class_1_181A04F78EA47987* Method_2_E681B6D41E5607D0()
	{
		return ((::Class_1_181A04F78EA47987*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_E681B6D41E5607D0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_E8CEC0D9ECB9B4FE(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_E8CEC0D9ECB9B4FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoInterestPoint*>* Method_2_EB617256E74DC075()
	{
		return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_EB617256E74DC075_OFFSET))(this);
	}

	::MoleMole::SceneMark::SceneMarkNode* Method_2_8883AC11AC96FE8C(::System::String* a1)
	{
		return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_8883AC11AC96FE8C_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoEntity*>* Method_2_BC6760B599CAC79F()
	{
		return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_BC6760B599CAC79F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* Method_2_251996A7C3B3258E(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_251996A7C3B3258E_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_06ACA01A6726AC56()
	{
		return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_06ACA01A6726AC56_OFFSET))(this);
	}

	::MoleMole::Battle::ColliderEventDispatcher* Method_2_FF6CB93DCC7D8770(::System::String* a1)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_FF6CB93DCC7D8770_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_38D1436661ACE062(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_38D1436661ACE062_OFFSET))(this, a1);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_2_6AB1147B0A202D95(::System::String* a1)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_6AB1147B0A202D95_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoVehicleObject*>* Method_2_EA766274F7EED335()
	{
		return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_EA766274F7EED335_OFFSET))(this);
	}

	::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5* Method_2_1510EAA5118F717B()
	{
		return ((::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_1510EAA5118F717B_OFFSET))(this);
	}

	::System::Void Method_2_DF8DA5BF16771AC1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_DF8DA5BF16771AC1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_3EB5C5E53F66CEB2(::MoleMole::Config::StageEntry* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_3EB5C5E53F66CEB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_5B8FCC60A2E67688(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_5B8FCC60A2E67688_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::MonoSpawnMonsterConfig* Method_2_C414B848449088FB(::System::String* a1)
	{
		return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_C414B848449088FB_OFFSET))(this, a1);
	}

	::MoleMole::MonoStageEnv* Method_2_F7D9D27F7F7223BA()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_F7D9D27F7F7223BA_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_43E9A417C0921572(::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_43E9A417C0921572_OFFSET))(this, a1);
	}

	::MoleMole::MonoWayPath* Method_2_68CD8E699DC19E7A(::System::String* a1)
	{
		return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_68CD8E699DC19E7A_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoPartySceneObject*>* Method_2_EB6CEA37242D192B()
	{
		return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_EB6CEA37242D192B_OFFSET))(this);
	}

	::MoleMole::Config::SceneConfigRuntimeData* Method_2_9789C70DDD6E4966()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_9789C70DDD6E4966_OFFSET))(this);
	}

	::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5* Method_2_F626245813283B0B()
	{
		return ((::Class_2_67FC18D32B1D1BAF_Class_1_1614FEAD2A2E65D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_F626245813283B0B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoDestructionObject*>* Method_2_9043D1136AE90971()
	{
		return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_9043D1136AE90971_OFFSET))(this);
	}

	::MoleMole::MonoSpawnPoint* Method_2_98F592F022876BA4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_98F592F022876BA4_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_FBCAF36A7FA06E45(::System::String* a1)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_FBCAF36A7FA06E45_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_905302C15794E3CD(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_905302C15794E3CD_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Boolean Method_2_9C89E670A8DEFF07(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_9C89E670A8DEFF07_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_D4B8CA172558A550(::MoleMole::ConfigUILightParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILightParam*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_D4B8CA172558A550_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoMainCityObject*>* Method_2_3C0B7DC83DEC5C77()
	{
		return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_3C0B7DC83DEC5C77_OFFSET))(this);
	}

	::MoleMole::MonoEntityModelModifier* Method_2_1E440C76F9E1E1B9(::System::String* a1)
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_1E440C76F9E1E1B9_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* Method_2_4A3FABA7B39F6DC5()
	{
		return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_4A3FABA7B39F6DC5_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	::System::Boolean Method_2_7809FA5C89001662(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_7809FA5C89001662_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_183* Method_2_E06F206E13D01A1D(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_183*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_E06F206E13D01A1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_502073A99F30AC35(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_502073A99F30AC35_OFFSET))(this, a1);
	}

	::System::Void Method_2_0258BA084D53B209(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_0258BA084D53B209_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::MoleMole::MonoBasePerpStage* Method_2_15F882260A7A661D()
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_15F882260A7A661D_OFFSET))(this);
	}

	::MoleMole::Config::StageEntry* Method_2_C7F8BCB95B0B87EE()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_C7F8BCB95B0B87EE_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
