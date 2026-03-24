#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1F36661149169E6_Struct_2_844657493ACED33A.h"
#include "unitysdk/Enum_3_9A984F774CA16C2E.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_825E7208930F7694.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_17C16694410E7397;
class Class_1_2B686E029302D4EC;
class Class_1_43BD383C98B4C0C5_62;
class Class_1_44F95CFC4F9A5E56;
class Class_1_5B3CA1CF33FF72E1;
class Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95;
class Class_1_E5B7864412CDC074;
class Class_1_F04D71A1D7DB3D55;
class Class_4_AC6D98911872E0CE;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_6E192A235841BE06;

#define CLASS_1_D1F36661149169E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6577290)
#define CLASS_1_D1F36661149169E6_METHOD_1_0944B4555AD21289_OFFSET UNITYSDK_OFFSET(0x6577A80)
#define CLASS_1_D1F36661149169E6_METHOD_1_095B18297CCAFFB7_OFFSET UNITYSDK_OFFSET(0x657B6D0)
#define CLASS_1_D1F36661149169E6_METHOD_1_102A75138BEA3EC2_OFFSET UNITYSDK_OFFSET(0x657C6B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_12D533A025AF866B_OFFSET UNITYSDK_OFFSET(0x657A140)
#define CLASS_1_D1F36661149169E6_METHOD_1_2376746B89663E0B_OFFSET UNITYSDK_OFFSET(0x657C280)
#define CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x657CBC0)
#define CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x657B960)
#define CLASS_1_D1F36661149169E6_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x6577C90)
#define CLASS_1_D1F36661149169E6_METHOD_1_2EFCB2CE7D787C53_OFFSET UNITYSDK_OFFSET(0x65780B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_2F8DD87A4F423047_OFFSET UNITYSDK_OFFSET(0x657A710)
#define CLASS_1_D1F36661149169E6_METHOD_1_30969553F9D0FC51_OFFSET UNITYSDK_OFFSET(0x657C110)
#define CLASS_1_D1F36661149169E6_METHOD_1_48C961074FCA86F3_OFFSET UNITYSDK_OFFSET(0x6579A40)
#define CLASS_1_D1F36661149169E6_METHOD_1_4D4C5E447B126BFB_OFFSET UNITYSDK_OFFSET(0x657B7C0)
#define CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x657A840)
#define CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x6577A60)
#define CLASS_1_D1F36661149169E6_METHOD_1_51620F6665375520_OFFSET UNITYSDK_OFFSET(0x6578EA0)
#define CLASS_1_D1F36661149169E6_METHOD_1_542B2354831E9CCA_OFFSET UNITYSDK_OFFSET(0x6577470)
#define CLASS_1_D1F36661149169E6_METHOD_1_5C662D52790B6C26_OFFSET UNITYSDK_OFFSET(0x657C070)
#define CLASS_1_D1F36661149169E6_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x6577990)
#define CLASS_1_D1F36661149169E6_METHOD_1_6F78BB41DA4709A4_OFFSET UNITYSDK_OFFSET(0x657C9B0)
#define CLASS_1_D1F36661149169E6_METHOD_1_7792EAD1D918FA2C_OFFSET UNITYSDK_OFFSET(0x657B970)
#define CLASS_1_D1F36661149169E6_METHOD_1_77D81737D30DEE06_OFFSET UNITYSDK_OFFSET(0x6577700)
#define CLASS_1_D1F36661149169E6_METHOD_1_7B6AC8F4A32FA17A_OFFSET UNITYSDK_OFFSET(0x657A670)
#define CLASS_1_D1F36661149169E6_METHOD_1_852BE94266932513_OFFSET UNITYSDK_OFFSET(0x657B340)
#define CLASS_1_D1F36661149169E6_METHOD_1_8FE3966C15750A17_OFFSET UNITYSDK_OFFSET(0x657AAD0)
#define CLASS_1_D1F36661149169E6_METHOD_1_923FB9A8FC9F4FA1_OFFSET UNITYSDK_OFFSET(0x657A0A0)
#define CLASS_1_D1F36661149169E6_METHOD_1_98910EF8C2F89AAC_OFFSET UNITYSDK_OFFSET(0x657C410)
#define CLASS_1_D1F36661149169E6_METHOD_1_9D0D7CD182C0B393_OFFSET UNITYSDK_OFFSET(0x657A2D0)
#define CLASS_1_D1F36661149169E6_METHOD_1_9DBA8895267638F1_OFFSET UNITYSDK_OFFSET(0x657B620)
#define CLASS_1_D1F36661149169E6_METHOD_1_A08D5D24ECE7197C_OFFSET UNITYSDK_OFFSET(0x6578430)
#define CLASS_1_D1F36661149169E6_METHOD_1_A2E2890763219A13_OFFSET UNITYSDK_OFFSET(0x657A860)
#define CLASS_1_D1F36661149169E6_METHOD_1_A913C7AA4DDC5C98_OFFSET UNITYSDK_OFFSET(0x6578690)
#define CLASS_1_D1F36661149169E6_METHOD_1_A9B92E2239835424_OFFSET UNITYSDK_OFFSET(0x657BB60)
#define CLASS_1_D1F36661149169E6_METHOD_1_AE4897DD9DFBC7D2_1_OFFSET UNITYSDK_OFFSET(0x657C940)
#define CLASS_1_D1F36661149169E6_METHOD_1_AE4897DD9DFBC7D2_OFFSET UNITYSDK_OFFSET(0x657BCD0)
#define CLASS_1_D1F36661149169E6_METHOD_1_B8BAAE9F062B8DF2_OFFSET UNITYSDK_OFFSET(0x657AB60)
#define CLASS_1_D1F36661149169E6_METHOD_1_BB89B5B63C3D548B_OFFSET UNITYSDK_OFFSET(0x657B840)
#define CLASS_1_D1F36661149169E6_METHOD_1_C634BEB666AB4BE6_OFFSET UNITYSDK_OFFSET(0x657BD40)
#define CLASS_1_D1F36661149169E6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x65780A0)
#define CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x657BE00)
#define CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x657A3C0)
#define CLASS_1_D1F36661149169E6_METHOD_1_D5899D84A5AA954B_OFFSET UNITYSDK_OFFSET(0x657C2D0)
#define CLASS_1_D1F36661149169E6_METHOD_1_D6CA3D065BA58D64_OFFSET UNITYSDK_OFFSET(0x657BE30)
#define CLASS_1_D1F36661149169E6_METHOD_1_D7158168877A6B42_OFFSET UNITYSDK_OFFSET(0x657AF80)
#define CLASS_1_D1F36661149169E6_METHOD_1_D90908C4B43B91A3_OFFSET UNITYSDK_OFFSET(0x657C350)
#define CLASS_1_D1F36661149169E6_METHOD_1_DD1A8024568B4390_OFFSET UNITYSDK_OFFSET(0x657A560)
#define CLASS_1_D1F36661149169E6_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x657C720)
#define CLASS_1_D1F36661149169E6_METHOD_1_E0826D8319877A5B_OFFSET UNITYSDK_OFFSET(0x6577820)
#define CLASS_1_D1F36661149169E6_METHOD_1_E24B05186F6E8E53_OFFSET UNITYSDK_OFFSET(0x6578AD0)
#define CLASS_1_D1F36661149169E6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x657BE20)
#define CLASS_1_D1F36661149169E6_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x657A3E0)
#define CLASS_1_D1F36661149169E6_METHOD_1_FA6E92074F242004_OFFSET UNITYSDK_OFFSET(0x657CBD0)
#define CLASS_1_D1F36661149169E6__CTOR_OFFSET UNITYSDK_OFFSET(0x6576F90)

inline static constexpr unsigned int Class_1_D1F36661149169E6_TypeDefinitionIndex = 73459;

class Class_1_D1F36661149169E6 : public ::System::Object
{
public:
	static ::Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95** StaticGet_Field_1_16()
	{
		return (::Class_1_D1F36661149169E6_Class_1_88DB5054F2AC4D95**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1F36661149169E6_TypeDefinitionIndex)->GetStaticField(0x2CAE0);
	}
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_Field_1_12()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1F36661149169E6_TypeDefinitionIndex)->GetStaticField(0x2CAE8);
	}
	// static const ::System::Int32 Field_1_8 = 0x1E; // 0x0
	::System::Action_1<::Class_4_AC6D98911872E0CE*>* Field_1_24; // 0x10
	::Class_1_43BD383C98B4C0C5_62* Field_1_19; // 0x18
	::Class_1_6E192A235841BE06<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_10; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_20; // 0x30
	::Class_1_5B3CA1CF33FF72E1* Field_1_11; // 0x38
	::Class_1_17C16694410E7397* Field_1_17; // 0x40
	::System::Action_1<::Class_4_AC6D98911872E0CE*>* Field_1_22; // 0x48
	::System::Action_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_25; // 0x50
	::Class_1_F04D71A1D7DB3D55* Field_1_13; // 0x58
	::Class_1_44F95CFC4F9A5E56* Field_1_14; // 0x60
	::System::Action_1<::Class_4_AC6D98911872E0CE*>* Field_1_23; // 0x68
	::Class_1_E5B7864412CDC074* Field_1_15; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_825E7208930F7694<::Enum_3_9A984F774CA16C2E>>* Field_1_21; // 0x78
	::Class_5_AF65C3A968E836D2* Field_1_18; // 0x80
	::System::Action* Field_1_4; // 0x88
	::System::Single Field_1_6; // 0x90
	::UnityEngine::Vector3 Field_1_2; // 0x94
	::UnityEngine::Matrix4x4 Field_1_5; // 0xA0
	::System::Boolean Field_1_1; // 0xE0
	::System::Boolean Field_1_0; // 0xE1
	::UnityEngine::Vector3 Field_1_3; // 0xE4
	::System::Int32 Field_1_9; // 0xF0

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* a1, ::Class_1_F04D71A1D7DB3D55* a2, ::Class_1_44F95CFC4F9A5E56* a3, ::Class_1_E5B7864412CDC074* a4, ::Class_1_17C16694410E7397* a5, ::Class_1_43BD383C98B4C0C5_62* a6, ::Class_5_AF65C3A968E836D2* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::Class_1_F04D71A1D7DB3D55*, ::Class_1_44F95CFC4F9A5E56*, ::Class_1_E5B7864412CDC074*, ::Class_1_17C16694410E7397*, ::Class_1_43BD383C98B4C0C5_62*, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_542B2354831E9CCA(::System::Single a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_542B2354831E9CCA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_77D81737D30DEE06(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_77D81737D30DEE06_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0944B4555AD21289(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_0944B4555AD21289_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EFCB2CE7D787C53(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2EFCB2CE7D787C53_OFFSET))(this, a1);
	}

	::System::Void Method_1_A08D5D24ECE7197C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A08D5D24ECE7197C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A913C7AA4DDC5C98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A913C7AA4DDC5C98_OFFSET))(this, a1);
	}

	::System::Void Method_1_923FB9A8FC9F4FA1(::Class_4_AC6D98911872E0CE* a1, ::Class_1_2B686E029302D4EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::Class_1_2B686E029302D4EC*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_923FB9A8FC9F4FA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D0D7CD182C0B393(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_9D0D7CD182C0B393_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	static ::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_F79D5EC57FBF426E_OFFSET))();
	}

	::System::Void Method_1_DD1A8024568B4390(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_DD1A8024568B4390_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B6AC8F4A32FA17A(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_7B6AC8F4A32FA17A_OFFSET))(this, a1);
	}

	::System::Void Method_1_12D533A025AF866B(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_12D533A025AF866B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2E2890763219A13(::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>* a1, ::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>* a2, ::System::Action_1<::Class_4_AC6D98911872E0CE*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>*, ::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>*, ::System::Action_1<::Class_4_AC6D98911872E0CE*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A2E2890763219A13_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8FE3966C15750A17(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A&))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_8FE3966C15750A17_OFFSET))(this, a1, a2);
	}

	::Struct_2_FD11E06FCEBA5113 Method_1_D7158168877A6B42(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessPieceSizeType a2)
	{
		return ((::Struct_2_FD11E06FCEBA5113(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D7158168877A6B42_OFFSET))(this, a1, a2);
	}

	::Class_1_2B686E029302D4EC* Method_1_E0826D8319877A5B(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::Class_1_2B686E029302D4EC*(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_E0826D8319877A5B_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_852BE94266932513()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_852BE94266932513_OFFSET))(this);
	}

	::System::Void Method_1_9DBA8895267638F1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_9DBA8895267638F1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_095B18297CCAFFB7(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_095B18297CCAFFB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D4C5E447B126BFB(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_4D4C5E447B126BFB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BB89B5B63C3D548B(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_BB89B5B63C3D548B_OFFSET))(this, a1);
	}

	::Class_1_44F95CFC4F9A5E56* Method_1_24748FC20F375725()
	{
		return ((::Class_1_44F95CFC4F9A5E56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_7792EAD1D918FA2C(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_7792EAD1D918FA2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE4897DD9DFBC7D2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_AE4897DD9DFBC7D2_OFFSET))(this, a1);
	}

	::Class_1_44F95CFC4F9A5E56* Method_1_67C10584F4320583()
	{
		return ((::Class_1_44F95CFC4F9A5E56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::System::Void Method_1_2F8DD87A4F423047(::Class_4_AC6D98911872E0CE* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2F8DD87A4F423047_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C634BEB666AB4BE6(::MoleMole::HollowChessPieceSizeType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessPieceSizeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_C634BEB666AB4BE6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D6CA3D065BA58D64(::MoleMole::HollowChessboard::HollowCell a1, ::Enum_3_9A984F774CA16C2E a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_9A984F774CA16C2E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D6CA3D065BA58D64_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_A9B92E2239835424(::Class_4_AC6D98911872E0CE* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::Class_4_AC6D98911872E0CE*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_A9B92E2239835424_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_E24B05186F6E8E53()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_E24B05186F6E8E53_OFFSET))(this);
	}

	::System::Void Method_1_48C961074FCA86F3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_48C961074FCA86F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C662D52790B6C26(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_5C662D52790B6C26_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2376746B89663E0B(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_2376746B89663E0B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5899D84A5AA954B(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D5899D84A5AA954B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D90908C4B43B91A3(::Class_4_AC6D98911872E0CE* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_D90908C4B43B91A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98910EF8C2F89AAC(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_98910EF8C2F89AAC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_102A75138BEA3EC2(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_102A75138BEA3EC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51620F6665375520(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_51620F6665375520_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_AE4897DD9DFBC7D2_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_AE4897DD9DFBC7D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F78BB41DA4709A4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_6F78BB41DA4709A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8BAAE9F062B8DF2(::MoleMole::HollowChessboard::HollowCell a1, ::Struct_2_A1A45D8655270887 a2, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A1A45D8655270887, ::Class_1_D1F36661149169E6_Struct_2_844657493ACED33A&))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_B8BAAE9F062B8DF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30969553F9D0FC51(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_30969553F9D0FC51_OFFSET))(this, a1, a2);
	}

	::Class_1_17C16694410E7397* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_17C16694410E7397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_FA6E92074F242004(::UnityEngine::Vector3 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D1F36661149169E6_METHOD_1_FA6E92074F242004_OFFSET))(this, a1);
	}
};
