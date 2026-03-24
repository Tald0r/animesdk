#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_510AA82C8B8CAF1E_Struct_2_33F17EEB50526DF1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/FlowCanvas/MonsterPositionDuty.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_28D401B702D9973D;
class Class_1_2DDAC2F6C97EB8AD;
class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
class Class_1_5DA2E7556103D5A3_365;
class Class_3_88ECEB7D5F9A93BA_3;
namespace MoleMole { class RandomMonsterSelectParam; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x836EAE0)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_03CE0F7B749C62EB_OFFSET UNITYSDK_OFFSET(0x8369A70)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_1DA0EEA2223F7596_OFFSET UNITYSDK_OFFSET(0x836C610)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_1DFDABFECD562670_OFFSET UNITYSDK_OFFSET(0x8369B40)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x8369940)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_2824987243CE5A3C_OFFSET UNITYSDK_OFFSET(0x836A590)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_340CEFB3138680AE_OFFSET UNITYSDK_OFFSET(0x8369F30)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_397D29C640BD8FC5_OFFSET UNITYSDK_OFFSET(0x836A350)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_6C0E9473C4C1BBF6_OFFSET UNITYSDK_OFFSET(0x836B3F0)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_6DEA3A0587244B0D_OFFSET UNITYSDK_OFFSET(0x836A6C0)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_7ED8296127E51E2C_OFFSET UNITYSDK_OFFSET(0x836C0B0)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x836A800)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_8F2E5040404D6D82_OFFSET UNITYSDK_OFFSET(0x836A220)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_A1F364A7A10CC3A0_OFFSET UNITYSDK_OFFSET(0x836AFA0)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_D0C73C3FDA743F37_OFFSET UNITYSDK_OFFSET(0x836A630)
#define CLASS_1_510AA82C8B8CAF1E_METHOD_1_D1DAEBC69E4F8C74_OFFSET UNITYSDK_OFFSET(0x836B450)

inline static constexpr unsigned int Class_1_510AA82C8B8CAF1E_TypeDefinitionIndex = 37895;

class Class_1_510AA82C8B8CAF1E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_228E3444D290BEE7_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_03CE0F7B749C62EB(::System::String* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_03CE0F7B749C62EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DFDABFECD562670(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_1DFDABFECD562670_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_340CEFB3138680AE(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* a1)
	{
		return ((::System::Void(*)(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_340CEFB3138680AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_8F2E5040404D6D82(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_8F2E5040404D6D82_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_397D29C640BD8FC5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_397D29C640BD8FC5_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_2824987243CE5A3C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_2824987243CE5A3C_OFFSET))(a1);
	}

	static ::Class_1_5DA2E7556103D5A3_365* Method_1_D0C73C3FDA743F37(::Class_3_88ECEB7D5F9A93BA_3* a1)
	{
		return ((::Class_1_5DA2E7556103D5A3_365*(*)(::Class_3_88ECEB7D5F9A93BA_3*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_D0C73C3FDA743F37_OFFSET))(a1);
	}

	static ::System::Void Method_1_6DEA3A0587244B0D(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* a1)
	{
		return ((::System::Void(*)(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_6DEA3A0587244B0D_OFFSET))(a1);
	}

	static ::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_821BBDC04720A2EB_OFFSET))();
	}

	static ::System::Boolean Method_1_A1F364A7A10CC3A0(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_A1F364A7A10CC3A0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_6C0E9473C4C1BBF6(::MoleMole::FlowCanvas::MonsterPositionDuty a1)
	{
		return ((::System::Int32(*)(::MoleMole::FlowCanvas::MonsterPositionDuty))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_6C0E9473C4C1BBF6_OFFSET))(a1);
	}

	static ::System::Void Method_1_D1DAEBC69E4F8C74(::System::Boolean a1, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_D1DAEBC69E4F8C74_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7ED8296127E51E2C(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_7ED8296127E51E2C_OFFSET))(a1, a2);
	}

	static ::Class_1_28D401B702D9973D* Method_1_1DA0EEA2223F7596(::Class_1_2DDAC2F6C97EB8AD* a1, ::MoleMole::RandomMonsterSelectParam* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
	{
		return ((::Class_1_28D401B702D9973D*(*)(::Class_1_2DDAC2F6C97EB8AD*, ::MoleMole::RandomMonsterSelectParam*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_1DA0EEA2223F7596_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
