#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35528E1B62C23E1D;
class Class_2_1124F1635B357D15;
class Class_2_378DC12A9E644947;
class Class_3_42E99B6238AA7291_1;
class Class_3_46898B6305AC9CE9_2;
class Class_3_C3F0E3B5AB5977AE_17;
class Class_3_E0C65D7026380557;
namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D2C8244A1032D424_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1852BAE0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_02EFFAE27F7FD9B3_OFFSET UNITYSDK_OFFSET(0x1852C980)
#define CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x185372E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_04B7AA1B97416FB6_OFFSET UNITYSDK_OFFSET(0x1852EE70)
#define CLASS_2_D2C8244A1032D424_METHOD_2_11CEC11E1701C4BC_OFFSET UNITYSDK_OFFSET(0x1852F900)
#define CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_1_OFFSET UNITYSDK_OFFSET(0x1852D190)
#define CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET UNITYSDK_OFFSET(0x18531660)
#define CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x18534F60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x18535700)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_1_OFFSET UNITYSDK_OFFSET(0x18534D10)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x185342C0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x185375C0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x18532980)
#define CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x18530630)
#define CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0x18537F00)
#define CLASS_2_D2C8244A1032D424_METHOD_2_25BE879D6784E696_OFFSET UNITYSDK_OFFSET(0x1852EBA0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18539390)
#define CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET UNITYSDK_OFFSET(0x1852F210)
#define CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET UNITYSDK_OFFSET(0x18532150)
#define CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x18538620)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1852CD00)
#define CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0x1852DAB0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_507CEB823971EC29_OFFSET UNITYSDK_OFFSET(0x1852E2D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET UNITYSDK_OFFSET(0x185388B0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET UNITYSDK_OFFSET(0x1852CFE0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5A7006C110BE26D7_OFFSET UNITYSDK_OFFSET(0x185384F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET UNITYSDK_OFFSET(0x1852DD60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET UNITYSDK_OFFSET(0x18532140)
#define CLASS_2_D2C8244A1032D424_METHOD_2_627B34A852B567C6_OFFSET UNITYSDK_OFFSET(0x18537370)
#define CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET UNITYSDK_OFFSET(0x1852FCE0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_662272CC39A09164_OFFSET UNITYSDK_OFFSET(0x185372F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_662E3E2742D2AC7D_OFFSET UNITYSDK_OFFSET(0x18537470)
#define CLASS_2_D2C8244A1032D424_METHOD_2_725103CEC10A14A7_OFFSET UNITYSDK_OFFSET(0x185360E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_73E572B6404DDFDC_OFFSET UNITYSDK_OFFSET(0x18536AA0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x1852FA30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0x18537550)
#define CLASS_2_D2C8244A1032D424_METHOD_2_996800F5017E11C2_OFFSET UNITYSDK_OFFSET(0x18538A60)
#define CLASS_2_D2C8244A1032D424_METHOD_2_99ADE5DAD9D57749_OFFSET UNITYSDK_OFFSET(0x18535F70)
#define CLASS_2_D2C8244A1032D424_METHOD_2_A04BE2E21AEAE7FD_OFFSET UNITYSDK_OFFSET(0x18533C90)
#define CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x18537270)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET UNITYSDK_OFFSET(0x1852CDE0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET UNITYSDK_OFFSET(0x1852F0E0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET UNITYSDK_OFFSET(0x18532020)
#define CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x185373F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C0D333C900C5765E_OFFSET UNITYSDK_OFFSET(0x185352F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x18534860)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET UNITYSDK_OFFSET(0x1852F600)
#define CLASS_2_D2C8244A1032D424_METHOD_2_C984F74D042AAFA9_OFFSET UNITYSDK_OFFSET(0x185361D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1852BCE0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x18539450)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1852DBC0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET UNITYSDK_OFFSET(0x18534660)
#define CLASS_2_D2C8244A1032D424_METHOD_2_D688D0344E21B871_OFFSET UNITYSDK_OFFSET(0x185337A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1852F020)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E7AD32ABA840707C_OFFSET UNITYSDK_OFFSET(0x1852F7D0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_E82D5FABF36323F7_OFFSET UNITYSDK_OFFSET(0x185340A0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EA71C2B5987C010D_OFFSET UNITYSDK_OFFSET(0x18534BC0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EC79E0B24E17DAD3_OFFSET UNITYSDK_OFFSET(0x1852E7F0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET UNITYSDK_OFFSET(0x18537400)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x185394C0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET UNITYSDK_OFFSET(0x18533A30)
#define CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET UNITYSDK_OFFSET(0x18538090)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET UNITYSDK_OFFSET(0x1852E0C0)
#define CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET UNITYSDK_OFFSET(0x18537B30)
#define CLASS_2_D2C8244A1032D424_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1852BD70)
#define CLASS_2_D2C8244A1032D424_UPDATE_OFFSET UNITYSDK_OFFSET(0x1852BFA0)
#define CLASS_2_D2C8244A1032D424__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852C910)
#define CLASS_2_D2C8244A1032D424__CTOR_OFFSET UNITYSDK_OFFSET(0x1852C440)

inline static constexpr unsigned int Class_2_D2C8244A1032D424_TypeDefinitionIndex = 54139;

class Class_2_D2C8244A1032D424 : public ::Foundation::SingletonDisposable_1<::Class_2_D2C8244A1032D424*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xFE70);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xFE71);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2C8244A1032D424_TypeDefinitionIndex)->GetStaticField(0xFE74);
	}
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Field_2_12; // 0x10
	::System::Collections::Generic::List_1<::Class_2_378DC12A9E644947*>* Field_2_19; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_11; // 0x28
	::UnityEngine::GameObject* Field_2_16; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_10; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::StaticSceneObjectWidget*>* Field_2_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Field_2_1; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_13; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Field_2_3; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_14; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScreenPlayer*>* Field_2_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SceneObjectStateWidget*>* Field_2_2; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*>* Field_2_20; // 0x80
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

	::System::Void Method_2_02EFFAE27F7FD9B3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_02EFFAE27F7FD9B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2404DAB113F1057(::System::Int32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B2404DAB113F1057_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BE72C14E5DDF09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_OFFSET))(this, a1);
	}

	::Class_1_35528E1B62C23E1D* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_35528E1B62C23E1D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_2_5B8FA454F81A3609(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5B8FA454F81A3609_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC5D5CDBAE1F0404(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FC5D5CDBAE1F0404_OFFSET))(this, a1);
	}

	::System::Void Method_2_507CEB823971EC29(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_507CEB823971EC29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25BE879D6784E696(::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_1*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_1*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_25BE879D6784E696_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_04B7AA1B97416FB6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_04B7AA1B97416FB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_33F2998170C3679F(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_33F2998170C3679F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C61B3E967EE99517(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C61B3E967EE99517_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_6392BADEA68B73FB(::UnityEngine::SceneManagement::Scene a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_6392BADEA68B73FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC79E0B24E17DAD3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EC79E0B24E17DAD3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_B77A8CFF9DB03ADE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B77A8CFF9DB03ADE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>* Method_2_621E876613F53112()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_621E876613F53112_OFFSET))(this);
	}

	::System::Void Method_2_350F1548BE252980(::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2C8244A1032D424_Enum_3_F891C4FF2EB291D9))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_350F1548BE252980_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_2_D688D0344E21B871(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_D688D0344E21B871_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7AD32ABA840707C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E7AD32ABA840707C_OFFSET))(this, a1);
	}

	::System::Void Method_2_11CEC11E1701C4BC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_11CEC11E1701C4BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3B5FA8EDB061C44(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F3B5FA8EDB061C44_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_A04BE2E21AEAE7FD(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_A04BE2E21AEAE7FD_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_E82D5FABF36323F7()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_E82D5FABF36323F7_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_EA71C2B5987C010D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EA71C2B5987C010D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CE7DD1A4F75322E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CE7DD1A4F75322E2_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_B7DF4E6E7DB52EAA(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_B7DF4E6E7DB52EAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0D333C900C5765E(::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_17*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_17*>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C0D333C900C5765E_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_99ADE5DAD9D57749(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_99ADE5DAD9D57749_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_725103CEC10A14A7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_725103CEC10A14A7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>* Method_2_C984F74D042AAFA9()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1124F1635B357D15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C984F74D042AAFA9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_73E572B6404DDFDC(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_73E572B6404DDFDC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Void Method_2_662272CC39A09164(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_662272CC39A09164_OFFSET))(this, a1);
	}

	::System::Void Method_2_627B34A852B567C6(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_627B34A852B567C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_14B0887B6DDD3006(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_35528E1B62C23E1D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_2_EC7C65582B49BD39(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_EC7C65582B49BD39_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* Method_2_662E3E2742D2AC7D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_662E3E2742D2AC7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_932E0718231FB60C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B8139AE71A3FDE1(::Class_3_46898B6305AC9CE9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46898B6305AC9CE9_2*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_FD779DD6D247D814(::MoleMole::SceneObjectStateWidget* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_FD779DD6D247D814_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_22E26A255EB831DA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_22E26A255EB831DA_OFFSET))(this);
	}

	::System::Int32 Method_2_F98A71FE615A562C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F98A71FE615A562C_OFFSET))(this);
	}

	::System::Void Method_2_5A7006C110BE26D7(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_5A7006C110BE26D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_1B3D8773D1869301_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_1B3D8773D1869301_1_OFFSET))(this);
	}

	::System::Void Method_2_14B0887B6DDD3006_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_14B0887B6DDD3006_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_51BE72C14E5DDF09_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_51BE72C14E5DDF09_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_996800F5017E11C2(::Class_3_E0C65D7026380557* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E0C65D7026380557*))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_996800F5017E11C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2C8244A1032D424_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}
};
