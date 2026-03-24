#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_26DDFDC4F5C5519D.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_5.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_449B1BB2E3AA2D13;
class Class_1_CF69DA127BBBD8F0;
class Class_3_5BC5304C4FD62567;
class Class_3_F6E9D1CD310ACC17_5;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UITriggerShootResultPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_5_F7314AB7E8654428_METHOD_5_1454A2C87876CD3B_OFFSET UNITYSDK_OFFSET(0xB4A6FD0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0xB4A82B0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xB4A7B20)
#define CLASS_5_F7314AB7E8654428_METHOD_5_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0xB4A8320)
#define CLASS_5_F7314AB7E8654428_METHOD_5_358A43E9D58CE907_OFFSET UNITYSDK_OFFSET(0xB4A8070)
#define CLASS_5_F7314AB7E8654428_METHOD_5_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0xB4A7F80)
#define CLASS_5_F7314AB7E8654428_METHOD_5_42EA1C6AB8285F8F_OFFSET UNITYSDK_OFFSET(0xB4A7440)
#define CLASS_5_F7314AB7E8654428_METHOD_5_4C4EBB4EB6CF0DA7_OFFSET UNITYSDK_OFFSET(0xB4A6FC0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xB4A7230)
#define CLASS_5_F7314AB7E8654428_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0xB4A83B0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0xB4A7040)
#define CLASS_5_F7314AB7E8654428_METHOD_5_5458C8D84D2FF046_OFFSET UNITYSDK_OFFSET(0xB4A8230)
#define CLASS_5_F7314AB7E8654428_METHOD_5_5C00367CEE393898_OFFSET UNITYSDK_OFFSET(0xB4A7A20)
#define CLASS_5_F7314AB7E8654428_METHOD_5_61C5AD913C0E9473_OFFSET UNITYSDK_OFFSET(0xB4A6F60)
#define CLASS_5_F7314AB7E8654428_METHOD_5_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xB4A8120)
#define CLASS_5_F7314AB7E8654428_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0xB4A72E0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0xB4A8190)
#define CLASS_5_F7314AB7E8654428_METHOD_5_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0xB4A7D70)
#define CLASS_5_F7314AB7E8654428_METHOD_5_8FC490809D3A2947_OFFSET UNITYSDK_OFFSET(0xB4A7E50)
#define CLASS_5_F7314AB7E8654428_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB4A70B0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_97057B25DFB42EA1_OFFSET UNITYSDK_OFFSET(0xB4A72F0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_9CDE5DB2F3CAC193_OFFSET UNITYSDK_OFFSET(0xB4A76C0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0xB4A8200)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C528AE3EFA8FD384_OFFSET UNITYSDK_OFFSET(0xB4A8080)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C6E311011C772BFA_OFFSET UNITYSDK_OFFSET(0xB4A83C0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_E1452630552839BA_OFFSET UNITYSDK_OFFSET(0xB4A83D0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_E718D14C1BC52C7B_OFFSET UNITYSDK_OFFSET(0xB4A7130)
#define CLASS_5_F7314AB7E8654428_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB4A8110)
#define CLASS_5_F7314AB7E8654428__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8060)

inline static constexpr unsigned int Class_5_F7314AB7E8654428_TypeDefinitionIndex = 75353;

class Class_5_F7314AB7E8654428 : public ::Class_4_26DDFDC4F5C5519D
{
public:
	::MoleMole::UITriggerShootResultPageController* Field_5_4; // 0x2C0
	::System::Double Field_5_1; // 0x2C8
	::System::Double Field_5_2; // 0x2D0
	::System::Double Field_5_3; // 0x2D8
	::System::Double Field_5_0; // 0x2E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428__CTOR_OFFSET))(this);
	}

	::System::Single Method_5_61C5AD913C0E9473()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_61C5AD913C0E9473_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>* Method_5_4C4EBB4EB6CF0DA7()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3_5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_4C4EBB4EB6CF0DA7_OFFSET))(this);
	}

	::System::Void Method_5_1454A2C87876CD3B(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_1454A2C87876CD3B_OFFSET))(this, a1);
	}

	::System::Void Method_5_53F8E7A039DF377D(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_95780ED94B90ED36_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_E718D14C1BC52C7B(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_E718D14C1BC52C7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_4E22A18EF530BFA8(::Class_3_5BC5304C4FD62567* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5BC5304C4FD62567*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_5_97057B25DFB42EA1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_97057B25DFB42EA1_OFFSET))(this);
	}

	::System::Void Method_5_42EA1C6AB8285F8F(::Class_3_F6E9D1CD310ACC17_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17_5*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_42EA1C6AB8285F8F_OFFSET))(this, a1);
	}

	::System::Void Method_5_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Boolean Method_5_8D7EA10616F1B51A(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_8D7EA10616F1B51A_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBaseController* Method_5_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_358A43E9D58CE907()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_358A43E9D58CE907_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C528AE3EFA8FD384_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_5_6B6AE2B3E1C3264F(::Class_3_5BC5304C4FD62567* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5BC5304C4FD62567*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_9CDE5DB2F3CAC193()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_9CDE5DB2F3CAC193_OFFSET))(this);
	}

	::System::Double Method_5_5C00367CEE393898()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_5C00367CEE393898_OFFSET))(this);
	}

	::System::Double Method_5_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_85C746F74910D9C1_OFFSET))(this);
	}

	static ::System::Boolean Method_5_8FC490809D3A2947(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_8FC490809D3A2947_OFFSET))(a1);
	}

	::System::Void Method_5_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C1EB52A4F4431ADE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_5_5458C8D84D2FF046()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_5458C8D84D2FF046_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_5_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17_5*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Void Method_5_C6E311011C772BFA(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C6E311011C772BFA_OFFSET))(this, a1);
	}

	::System::Void Method_5_E1452630552839BA(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_E1452630552839BA_OFFSET))(this, a1);
	}
};
