#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35528E1B62C23E1D;
class Class_2_1124F1635B357D15;
class Class_2_378DC12A9E644947;
class Class_3_0886A771C4D53727_9;
class Class_3_46898B6305AC9CE9_1;
class Class_3_C3F0E3B5AB5977AE_44;
class Class_3_E0C65D7026380557;
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D2C8244A1032D424_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8B66F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_02EFFAE27F7FD9B3_OFFSET UNITYSDK_OFFSET(0xB8BFF60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0xB8B8400)
#define CLASS_2_D2C8244A1032D424_METHOD_2_04B7AA1B97416FB6_OFFSET UNITYSDK_OFFSET(0xB8BBA50)
#define CLASS_2_D2C8244A1032D424_METHOD_2_101C0B66F0669B59_OFFSET UNITYSDK_OFFSET(0xB8BA520)
#define CLASS_2_D2C8244A1032D424_METHOD_2_11CEC11E1701C4BC_OFFSET UNITYSDK_OFFSET(0xB8BB530)
#define CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_1_OFFSET UNITYSDK_OFFSET(0xB892440)
#define CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET UNITYSDK_OFFSET(0xB8B8C50)
#define CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB8BF690)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_1_OFFSET UNITYSDK_OFFSET(0x6F17900)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xB8BDF00)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0xB8C16D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_1_OFFSET UNITYSDK_OFFSET(0x6F18100)
#define CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xB8BC7F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0xB8BC220)
#define CLASS_2_D2C8244A1032D424_METHOD_2_25BE879D6784E696_OFFSET UNITYSDK_OFFSET(0xB8BB260)
#define CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB8C0BD0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET UNITYSDK_OFFSET(0xB8BB660)
#define CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET UNITYSDK_OFFSET(0xB8B8410)
#define CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xB8BAFD0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_45CE2DF1F313EAA5_OFFSET UNITYSDK_OFFSET(0xB8BE580)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB8B7580)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0xB8B9610)
#define CLASS_2_D2C8244A1032D424_METHOD_2_507CEB823971EC29_OFFSET UNITYSDK_OFFSET(0xB8BEFF0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET UNITYSDK_OFFSET(0xB8BE3D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET UNITYSDK_OFFSET(0xB8BBC00)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5A7006C110BE26D7_OFFSET UNITYSDK_OFFSET(0xB8BFA20)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET UNITYSDK_OFFSET(0xB8BC490)
#define CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET UNITYSDK_OFFSET(0xB8BF510)
#define CLASS_2_D2C8244A1032D424_METHOD_2_627B34A852B567C6_OFFSET UNITYSDK_OFFSET(0xB8BAF50)
#define CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET UNITYSDK_OFFSET(0xB8C0D80)
#define CLASS_2_D2C8244A1032D424_METHOD_2_662272CC39A09164_OFFSET UNITYSDK_OFFSET(0x6F17880)
#define CLASS_2_D2C8244A1032D424_METHOD_2_662E3E2742D2AC7D_OFFSET UNITYSDK_OFFSET(0xB8BC3B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_725103CEC10A14A7_OFFSET UNITYSDK_OFFSET(0xB8C0C90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xB8B7C90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0xB8BE2A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_996800F5017E11C2_OFFSET UNITYSDK_OFFSET(0xB8C1C40)
#define CLASS_2_D2C8244A1032D424_METHOD_2_99ADE5DAD9D57749_OFFSET UNITYSDK_OFFSET(0xB8BF520)
#define CLASS_2_D2C8244A1032D424_METHOD_2_A04BE2E21AEAE7FD_OFFSET UNITYSDK_OFFSET(0xB8BA110)
#define CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0xB8B8390)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET UNITYSDK_OFFSET(0xB8B9F00)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET UNITYSDK_OFFSET(0xB8BDDD0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET UNITYSDK_OFFSET(0xB8BD830)
#define CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0xB8BA100)
#define CLASS_2_D2C8244A1032D424_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0xB8C02E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C0D333C900C5765E_OFFSET UNITYSDK_OFFSET(0xB8BFB50)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xB8B7F40)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET UNITYSDK_OFFSET(0xB8BC040)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xB8B68F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xB8B9AD0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0xB8B78F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0xB8B7A90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_D688D0344E21B871_OFFSET UNITYSDK_OFFSET(0xB8BBDB0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB8BE310)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E7AD32ABA840707C_OFFSET UNITYSDK_OFFSET(0xB8B8260)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E82D5FABF36323F7_OFFSET UNITYSDK_OFFSET(0xB8BDBB0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EA71C2B5987C010D_OFFSET UNITYSDK_OFFSET(0xB8BE150)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EC79E0B24E17DAD3_OFFSET UNITYSDK_OFFSET(0xB8B9720)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET UNITYSDK_OFFSET(0xB8C0B60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xB8B7870)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET UNITYSDK_OFFSET(0xB8BD950)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET UNITYSDK_OFFSET(0x6F17CA0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET UNITYSDK_OFFSET(0xB8B7660)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET UNITYSDK_OFFSET(0xB8B9B40)
#define CLASS_2_D2C8244A1032D424_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB8B6980)
#define CLASS_2_D2C8244A1032D424_UPDATE_OFFSET UNITYSDK_OFFSET(0xB8B6BB0)
#define CLASS_2_D2C8244A1032D424__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8B7510)
#define CLASS_2_D2C8244A1032D424__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B7040)

inline static constexpr unsigned int Class_2_D2C8244A1032D424_TypeDefinitionIndex = 71218;

class Class_2_D2C8244A1032D424 : public ::Foundation::SingletonDisposable_1<::Class_2_D2C8244A1032D424*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xF510);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xF511);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xF514);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::StaticSceneObjectWidget*>* Field_2_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Field_2_12; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*>* Field_2_20; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_11; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScreenPlayer*>* Field_2_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_10; // 0x50
	::System::Collections::Generic::List_1<::Class_2_378DC12A9E644947*>* Field_2_19; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_3; // 0x68
	::UnityEngine::GameObject* Field_2_16; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_13; // 0x80
	::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9 Field_2_17; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_UPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_FC5D5CDBAE1F0404(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_E7AD32ABA840707C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E7AD32ABA840707C_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Void Method_2_350F1548BE252980(::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET))(this, a1);
	}

	::Class_1_35528E1B62C23E1D* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_35528E1B62C23E1D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC79E0B24E17DAD3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EC79E0B24E17DAD3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_FD779DD6D247D814(::MoleMole::SceneObjectStateWidget* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B2404DAB113F1057(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Int32 Method_2_A04BE2E21AEAE7FD(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_A04BE2E21AEAE7FD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>* Method_2_101C0B66F0669B59()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_101C0B66F0669B59_OFFSET))(this);
	}

	::System::Void Method_2_627B34A852B567C6(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_627B34A852B567C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_25BE879D6784E696(::System::Collections::Generic::List_1<::Class_3_0886A771C4D53727_9*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_0886A771C4D53727_9*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_25BE879D6784E696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_11CEC11E1701C4BC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_11CEC11E1701C4BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F2998170C3679F(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_04B7AA1B97416FB6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_04B7AA1B97416FB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET))(this, a1);
	}

	::System::Void Method_2_C61B3E967EE99517(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_22E26A255EB831DA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* Method_2_662E3E2742D2AC7D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_662E3E2742D2AC7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B8FA454F81A3609(::System::Collections::Generic::List_1<::Class_3_0886A771C4D53727_9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_0886A771C4D53727_9*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET))(this, a1);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_F3B5FA8EDB061C44(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_E82D5FABF36323F7()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E82D5FABF36323F7_OFFSET))(this);
	}

	::System::Void Method_2_B77A8CFF9DB03ADE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_EA71C2B5987C010D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EA71C2B5987C010D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_45CE2DF1F313EAA5(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_45CE2DF1F313EAA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D688D0344E21B871(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_D688D0344E21B871_OFFSET))(this, a1);
	}

	::System::Void Method_2_507CEB823971EC29(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_507CEB823971EC29_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Method_2_621E876613F53112()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET))(this);
	}

	::System::Void Method_2_B7DF4E6E7DB52EAA(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_99ADE5DAD9D57749(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_99ADE5DAD9D57749_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_5A7006C110BE26D7(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5A7006C110BE26D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0D333C900C5765E(::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C0D333C900C5765E_OFFSET))(this, a1);
	}

	::System::Void Method_2_02EFFAE27F7FD9B3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_02EFFAE27F7FD9B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_14B0887B6DDD3006(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET))(this, a1);
	}

	::System::Void Method_2_14B0887B6DDD3006_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_EC7C65582B49BD39(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_725103CEC10A14A7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_725103CEC10A14A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6392BADEA68B73FB(::UnityEngine::SceneManagement::Scene a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B8139AE71A3FDE1(::Class_3_46898B6305AC9CE9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46898B6305AC9CE9_1*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_996800F5017E11C2(::Class_3_E0C65D7026380557* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E0C65D7026380557*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_996800F5017E11C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_662272CC39A09164(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_662272CC39A09164_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_1_OFFSET))(this);
	}

	::System::Int32 Method_2_F98A71FE615A562C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_1_OFFSET))(this);
	}
};
