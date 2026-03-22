#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_73E669FDA870C659.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C_1.h"
#include "unitysdk/Enum_3_747AE3BA43CDD61B.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6395341EAB0CC976;
class Class_1_6D46C2B510FC0355;
class Class_1_97E659ED8D5D259C_1;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_DCC33F9C2BD5AF55;
template <typename T> class Class_1_1D2D64B0F11327DE;

#define CLASS_3_493953025FA316DA_METHOD_3_01D7F8AAF707AB6F_OFFSET UNITYSDK_OFFSET(0x7574960)
#define CLASS_3_493953025FA316DA_METHOD_3_0CE5CE29F53FFD7E_OFFSET UNITYSDK_OFFSET(0x75739B0)
#define CLASS_3_493953025FA316DA_METHOD_3_1379872E747EC83A_OFFSET UNITYSDK_OFFSET(0x7572F90)
#define CLASS_3_493953025FA316DA_METHOD_3_1B5C27147E0C795D_OFFSET UNITYSDK_OFFSET(0x7573830)
#define CLASS_3_493953025FA316DA_METHOD_3_20153B6C99FCBDB1_OFFSET UNITYSDK_OFFSET(0x7571A40)
#define CLASS_3_493953025FA316DA_METHOD_3_38E82B4E9CF8D7EF_OFFSET UNITYSDK_OFFSET(0x7572D80)
#define CLASS_3_493953025FA316DA_METHOD_3_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x7574B50)
#define CLASS_3_493953025FA316DA_METHOD_3_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x7572F80)
#define CLASS_3_493953025FA316DA_METHOD_3_3E9811092685C516_OFFSET UNITYSDK_OFFSET(0x7574550)
#define CLASS_3_493953025FA316DA_METHOD_3_42442ACDBA147F77_OFFSET UNITYSDK_OFFSET(0x7571840)
#define CLASS_3_493953025FA316DA_METHOD_3_4F938037E359EE93_OFFSET UNITYSDK_OFFSET(0x7572D50)
#define CLASS_3_493953025FA316DA_METHOD_3_53A724C6F6103807_OFFSET UNITYSDK_OFFSET(0x7572EE0)
#define CLASS_3_493953025FA316DA_METHOD_3_5D23A58AB77004DB_OFFSET UNITYSDK_OFFSET(0x7572ED0)
#define CLASS_3_493953025FA316DA_METHOD_3_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x75716A0)
#define CLASS_3_493953025FA316DA_METHOD_3_76DE950001A4D91E_OFFSET UNITYSDK_OFFSET(0x7574800)
#define CLASS_3_493953025FA316DA_METHOD_3_80B88FE2B25716FD_OFFSET UNITYSDK_OFFSET(0x75747F0)
#define CLASS_3_493953025FA316DA_METHOD_3_82640502663AA3C0_OFFSET UNITYSDK_OFFSET(0x75741B0)
#define CLASS_3_493953025FA316DA_METHOD_3_8892F32B5EFDA66C_OFFSET UNITYSDK_OFFSET(0x7572B00)
#define CLASS_3_493953025FA316DA_METHOD_3_931DE5FAA8599AD8_OFFSET UNITYSDK_OFFSET(0x7571720)
#define CLASS_3_493953025FA316DA_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x75715F0)
#define CLASS_3_493953025FA316DA_METHOD_3_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0x7574670)
#define CLASS_3_493953025FA316DA_METHOD_3_B49FE419A193B732_OFFSET UNITYSDK_OFFSET(0x7573030)
#define CLASS_3_493953025FA316DA_METHOD_3_C1D40FCFBF511181_OFFSET UNITYSDK_OFFSET(0x7572550)
#define CLASS_3_493953025FA316DA_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7572520)
#define CLASS_3_493953025FA316DA_METHOD_3_CA653EAAE11D5AAA_OFFSET UNITYSDK_OFFSET(0x7572E20)
#define CLASS_3_493953025FA316DA_METHOD_3_E3BDA3DC2130C0CD_OFFSET UNITYSDK_OFFSET(0x7573F60)
#define CLASS_3_493953025FA316DA_METHOD_3_E8727210A6BB9B6F_OFFSET UNITYSDK_OFFSET(0x7573B00)
#define CLASS_3_493953025FA316DA_METHOD_3_F40A1039406BFB27_OFFSET UNITYSDK_OFFSET(0x7574420)
#define CLASS_3_493953025FA316DA__CTOR_OFFSET UNITYSDK_OFFSET(0x7572C00)

inline static constexpr unsigned int Class_3_493953025FA316DA_TypeDefinitionIndex = 70930;

class Class_3_493953025FA316DA : public ::Class_2_73E669FDA870C659
{
public:
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_3; // 0x70
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_1; // 0x78
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_3_2; // 0x80
	::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>* Field_3_0; // 0x88
	::System::Int32 Field_3_4; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::Class_1_6395341EAB0CC976* Method_3_67013AED7A137AC2(::Class_1_6D46C2B510FC0355*& a1)
	{
		return ((::Class_1_6395341EAB0CC976*(*)(::PVOID, ::Class_1_6D46C2B510FC0355*&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_67013AED7A137AC2_OFFSET))(this, a1);
	}

	::System::Void Method_3_931DE5FAA8599AD8(::Struct_2_A1A45D8655270887 a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Enum_3_747AE3BA43CDD61B a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A1A45D8655270887, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_747AE3BA43CDD61B))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_931DE5FAA8599AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_42442ACDBA147F77(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_97E659ED8D5D259C_1* a2, ::Class_1_97E659ED8D5D259C_1* a3, ::Enum_3_747AE3BA43CDD61B a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*, ::Class_1_97E659ED8D5D259C_1*, ::Enum_3_747AE3BA43CDD61B))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_42442ACDBA147F77_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Enum_3_41536F26CBEE8D4C_1>>* Method_3_C1D40FCFBF511181(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Double& a3, ::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>* a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Enum_3_41536F26CBEE8D4C_1>>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double&, ::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_C1D40FCFBF511181_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_20153B6C99FCBDB1(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_20153B6C99FCBDB1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8892F32B5EFDA66C(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_8892F32B5EFDA66C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F938037E359EE93(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_97E659ED8D5D259C_1* a2, ::Class_1_97E659ED8D5D259C_1* a3, ::Enum_3_747AE3BA43CDD61B a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*, ::Class_1_97E659ED8D5D259C_1*, ::Enum_3_747AE3BA43CDD61B))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_4F938037E359EE93_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_38E82B4E9CF8D7EF(::MoleMole::Vector2Int a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_38E82B4E9CF8D7EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CA653EAAE11D5AAA(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowCell& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_CA653EAAE11D5AAA_OFFSET))(this, a1, a2);
	}

	::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>* Method_3_5D23A58AB77004DB()
	{
		return ((::Class_1_DCC33F9C2BD5AF55<::MoleMole::HollowChessboard::HollowCell, ::Class_1_1D2D64B0F11327DE<::MoleMole::HollowChessboard::HollowCell>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_5D23A58AB77004DB_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_53A724C6F6103807(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_53A724C6F6103807_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_1379872E747EC83A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_1379872E747EC83A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1B5C27147E0C795D(::Struct_2_A1A45D8655270887 a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A1A45D8655270887, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_1B5C27147E0C795D_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowCell Method_3_0CE5CE29F53FFD7E(::Struct_2_A1A45D8655270887 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::Struct_2_A1A45D8655270887))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_0CE5CE29F53FFD7E_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_E8727210A6BB9B6F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_E8727210A6BB9B6F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HollowCell>* Method_3_82640502663AA3C0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_82640502663AA3C0_OFFSET))(this);
	}

	::System::Boolean Method_3_E3BDA3DC2130C0CD(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_E3BDA3DC2130C0CD_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B49FE419A193B732(::MoleMole::HollowChessboard::HollowCell a1, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_B49FE419A193B732_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_F40A1039406BFB27(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_F40A1039406BFB27_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_3_3E9811092685C516()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_3E9811092685C516_OFFSET))(this);
	}

	::System::Void Method_3_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_A97853745B74DFF6_OFFSET))(this);
	}

	::Class_1_6395341EAB0CC976* Method_3_80B88FE2B25716FD(::Class_1_6D46C2B510FC0355*& a1)
	{
		return ((::Class_1_6395341EAB0CC976*(*)(::PVOID, ::Class_1_6D46C2B510FC0355*&))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_80B88FE2B25716FD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_76DE950001A4D91E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_76DE950001A4D91E_OFFSET))(this, a1);
	}

	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Method_3_01D7F8AAF707AB6F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_01D7F8AAF707AB6F_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_493953025FA316DA_METHOD_3_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
