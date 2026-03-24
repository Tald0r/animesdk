#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenAreaConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_GenTagConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_RuntimenConfigMeta.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_IRNG; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x8115890)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x81147C0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_0CBDBA9CA0B6BF99_OFFSET UNITYSDK_OFFSET(0x8116610)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_1_OFFSET UNITYSDK_OFFSET(0x8115970)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x8114D60)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_18CC28A365540467_OFFSET UNITYSDK_OFFSET(0x8113900)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1E91FFFB37216F67_1_OFFSET UNITYSDK_OFFSET(0x8115330)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0x8114950)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_2C0A443620D4B5E2_OFFSET UNITYSDK_OFFSET(0x8113F00)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x8113FB0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_43D07ADB8B3A84C6_OFFSET UNITYSDK_OFFSET(0x8114CF0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8113400)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_5DF574466CCD0CE3_OFFSET UNITYSDK_OFFSET(0x8113460)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_71BA9FC96EAA27D0_OFFSET UNITYSDK_OFFSET(0x8114820)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_7E8421BD4C2BAFFA_OFFSET UNITYSDK_OFFSET(0x81158F0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_B44D811F22C9DB74_OFFSET UNITYSDK_OFFSET(0x8115200)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_BE3C026E37192957_OFFSET UNITYSDK_OFFSET(0x81156D0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_C74F1F5106B79E79_OFFSET UNITYSDK_OFFSET(0x8114A60)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x8115E10)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x8115440)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_E30D25437A17FB18_OFFSET UNITYSDK_OFFSET(0x81148D0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_E9C5DEE581662A66_OFFSET UNITYSDK_OFFSET(0x81161D0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_F8159D27A5B9DBC8_OFFSET UNITYSDK_OFFSET(0x81168B0)
#define CLASS_1_4DD827ABB3971C28__CCTOR_OFFSET UNITYSDK_OFFSET(0x8113330)

inline static constexpr unsigned int Class_1_4DD827ABB3971C28_TypeDefinitionIndex = 50706;

class Class_1_4DD827ABB3971C28 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DD827ABB3971C28_TypeDefinitionIndex)->GetStaticField(0x36350);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DD827ABB3971C28_TypeDefinitionIndex)->GetStaticField(0x36358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_5DF574466CCD0CE3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_5DF574466CCD0CE3_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C0A443620D4B5E2(::System::Int32 a1, ::MoleMole::AbyssS2_GenConfigMeta a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_2C0A443620D4B5E2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_2CBE0B79DD36047E_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_71BA9FC96EAA27D0(::System::Int32 a1, ::MoleMole::AbyssS2_RuntimenConfigMeta a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_71BA9FC96EAA27D0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_E30D25437A17FB18(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::AbyssS2_GenConfigMeta a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_E30D25437A17FB18_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1E91FFFB37216F67(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1E91FFFB37216F67_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>* Method_1_C74F1F5106B79E79(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_C74F1F5106B79E79_OFFSET))(a1, a2);
	}

	static ::MoleMole::FlowCanvas::Nodes::AreaIDTag Method_1_43D07ADB8B3A84C6(::System::UInt32 a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_43D07ADB8B3A84C6_OFFSET))(a1);
	}

	static ::System::Void Method_1_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_OFFSET))();
	}

	static ::System::Void Method_1_18CC28A365540467(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_18CC28A365540467_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_B44D811F22C9DB74(::System::Collections::Generic::List_1<::System::Int32>* a1, ::MoleMole::AbyssS2_GenConfigMeta a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_B44D811F22C9DB74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1E91FFFB37216F67_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1E91FFFB37216F67_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_DEAC86EB2AD5D389_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_BE3C026E37192957(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_BE3C026E37192957_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7E8421BD4C2BAFFA(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::AbyssS2_RuntimenConfigMeta a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_7E8421BD4C2BAFFA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1659BCB6D1A9FC34_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_1_OFFSET))();
	}

	static ::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_C8E2469222842786_OFFSET))();
	}

	static ::System::Void Method_1_E9C5DEE581662A66(::System::Int32 a1, ::MoleMole::AbyssS2_GenConfigMeta a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_E9C5DEE581662A66_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* Method_1_0CBDBA9CA0B6BF99(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_0CBDBA9CA0B6BF99_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::AbyssS2_GenAreaConfigItem Method_1_F8159D27A5B9DBC8(::MoleMole::AbyssS2_IRNG* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* a2)
	{
		return ((::MoleMole::AbyssS2_GenAreaConfigItem(*)(::MoleMole::AbyssS2_IRNG*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_F8159D27A5B9DBC8_OFFSET))(a1, a2);
	}
};
