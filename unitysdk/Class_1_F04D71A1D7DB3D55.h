#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F04D71A1D7DB3D55_Struct_2_1F08FE7D76D71966.h"
#include "unitysdk/Class_1_F04D71A1D7DB3D55_Struct_2_BBD456EBC9087BC2_8.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_13.h"
#include "unitysdk/Enum_3_4623238576979FE3.h"
#include "unitysdk/MoleMole/ChessboardPathLink.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_395B739A1AC58399.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_2.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/Struct_2_FD11E06FCEBA5113.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_3_493953025FA316DA;
class Class_4_AC6D98911872E0CE;
class Class_4_FE723876298B9E96;
class Class_5_0B648F1F8F6AC84A;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_2813CDA492351A36_OFFSET UNITYSDK_OFFSET(0x93AA3B0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_1_OFFSET UNITYSDK_OFFSET(0x93AC2A0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_2_OFFSET UNITYSDK_OFFSET(0x93AC470)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_3_OFFSET UNITYSDK_OFFSET(0x93AC640)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_OFFSET UNITYSDK_OFFSET(0x93ABE60)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3A8D1629C3F3BB2E_OFFSET UNITYSDK_OFFSET(0x93AB4E0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_3BF77D5E9050BBD6_OFFSET UNITYSDK_OFFSET(0x93AEDF0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_43ADAE1009ACC52B_OFFSET UNITYSDK_OFFSET(0x93AB0D0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_52C0BD9A9B7CCE03_OFFSET UNITYSDK_OFFSET(0x93AA8B0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_53224F0CF70A09FC_OFFSET UNITYSDK_OFFSET(0x93AB4F0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_55F044CF9BBA8320_OFFSET UNITYSDK_OFFSET(0x93AA260)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_5D0125586A000B11_OFFSET UNITYSDK_OFFSET(0x93AD150)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_732BAD6F52708D4E_OFFSET UNITYSDK_OFFSET(0x93AA4D0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_852B6406D0678729_OFFSET UNITYSDK_OFFSET(0x93AC0C0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_89C0155391FF9467_OFFSET UNITYSDK_OFFSET(0x93AE9B0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_8AF61C085DBCCDF8_OFFSET UNITYSDK_OFFSET(0x93AAE00)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_9301A43F66C65B07_OFFSET UNITYSDK_OFFSET(0x93AA040)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x93AC030)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0x93AE290)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0x93AE200)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_4_OFFSET UNITYSDK_OFFSET(0x93AE170)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x93AB040)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_975252588CAA701B_OFFSET UNITYSDK_OFFSET(0x93AC810)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_97966926D091E2DD_OFFSET UNITYSDK_OFFSET(0x93AAB40)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_B45D2D5D592E6621_OFFSET UNITYSDK_OFFSET(0x93AB8E0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_C5D27AFEF7EFB8F4_OFFSET UNITYSDK_OFFSET(0x93AD940)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_DC7EC65F06E665E0_OFFSET UNITYSDK_OFFSET(0x93AE9C0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_1_OFFSET UNITYSDK_OFFSET(0x93ABB60)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_2_OFFSET UNITYSDK_OFFSET(0x93ABC20)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_3_OFFSET UNITYSDK_OFFSET(0x93ABCE0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_OFFSET UNITYSDK_OFFSET(0x93ABDA0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_F00F67A2453AEC1F_OFFSET UNITYSDK_OFFSET(0x93AB8F0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_F6C54E799ECC0C30_OFFSET UNITYSDK_OFFSET(0x93AF1D0)
#define CLASS_1_F04D71A1D7DB3D55_METHOD_1_FEC484052B4643C3_OFFSET UNITYSDK_OFFSET(0x93AE320)
#define CLASS_1_F04D71A1D7DB3D55__CCTOR_OFFSET UNITYSDK_OFFSET(0x93AA000)
#define CLASS_1_F04D71A1D7DB3D55__CTOR_OFFSET UNITYSDK_OFFSET(0x93A9F90)

inline static constexpr unsigned int Class_1_F04D71A1D7DB3D55_TypeDefinitionIndex = 72302;

class Class_1_F04D71A1D7DB3D55 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F04D71A1D7DB3D55_TypeDefinitionIndex)->GetStaticField(0xD6A0);
	}
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_3; // 0x10
	::Il2CppArray<::UnityEngine::Plane>* Field_1_5; // 0x18
	::Class_3_493953025FA316DA* Field_1_4; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_2; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_1; // 0x30

	::System::Void _ctor(::Class_3_493953025FA316DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_493953025FA316DA*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_9301A43F66C65B07(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2, ::Enum_3_4608E37A1B3D374A_13 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*, ::Enum_3_4608E37A1B3D374A_13, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_9301A43F66C65B07_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3BFB14B0511B64BC_2 Method_1_2813CDA492351A36(::Class_4_AC6D98911872E0CE* a1, ::Class_4_AC6D98911872E0CE* a2)
	{
		return ((::Struct_2_3BFB14B0511B64BC_2(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_2813CDA492351A36_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_732BAD6F52708D4E(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_732BAD6F52708D4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_1_97966926D091E2DD(::MoleMole::HollowChessboard::HollowCell a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>* a3)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_97966926D091E2DD_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	static ::System::Boolean Method_1_43ADAE1009ACC52B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_43ADAE1009ACC52B_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3A8D1629C3F3BB2E(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3A8D1629C3F3BB2E_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_53224F0CF70A09FC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_53224F0CF70A09FC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_55F044CF9BBA8320(::Class_4_FE723876298B9E96* a1, ::Class_5_0B648F1F8F6AC84A* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::Class_4_FE723876298B9E96*, ::Class_5_0B648F1F8F6AC84A*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_55F044CF9BBA8320_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::ChessboardPathLink Method_1_F00F67A2453AEC1F(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::MoleMole::ChessboardPathLink(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_F00F67A2453AEC1F_OFFSET))(a1, a2);
	}

	::Class_5_0B648F1F8F6AC84A* Method_1_3705D76B9DF40917()
	{
		return ((::Class_5_0B648F1F8F6AC84A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_852B6406D0678729()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_852B6406D0678729_OFFSET))(this);
	}

	static ::System::Boolean Method_1_B45D2D5D592E6621(::System::Int32 a1, ::Class_1_F04D71A1D7DB3D55_Struct_2_BBD456EBC9087BC2_8& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_1_F04D71A1D7DB3D55_Struct_2_BBD456EBC9087BC2_8&))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_B45D2D5D592E6621_OFFSET))(a1, a2);
	}

	::Class_5_0B648F1F8F6AC84A* Method_1_3705D76B9DF40917_1()
	{
		return ((::Class_5_0B648F1F8F6AC84A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_1_OFFSET))(this);
	}

	static ::Enum_3_4623238576979FE3 Method_1_975252588CAA701B(::Class_4_AC6D98911872E0CE* a1, ::Class_4_AC6D98911872E0CE* a2, ::System::Int32 a3)
	{
		return ((::Enum_3_4623238576979FE3(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_AC6D98911872E0CE*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_975252588CAA701B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5D0125586A000B11(::Struct_2_395B739A1AC58399 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
	{
		return ((::System::Boolean(*)(::Struct_2_395B739A1AC58399, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_5D0125586A000B11_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C5D27AFEF7EFB8F4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_C5D27AFEF7EFB8F4_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_FEC484052B4643C3(::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113> a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113> a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_FD11E06FCEBA5113>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_FEC484052B4643C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E500E4D9531012D0(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_OFFSET))(a1, a2);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_89C0155391FF9467()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_89C0155391FF9467_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E500E4D9531012D0_1(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_1_OFFSET))(a1, a2);
	}

	::Class_5_0B648F1F8F6AC84A* Method_1_3705D76B9DF40917_2()
	{
		return ((::Class_5_0B648F1F8F6AC84A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_2_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8AF61C085DBCCDF8(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_F04D71A1D7DB3D55_Struct_2_1F08FE7D76D71966& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_1_F04D71A1D7DB3D55_Struct_2_1F08FE7D76D71966&))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_8AF61C085DBCCDF8_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_DC7EC65F06E665E0(::Class_5_0B648F1F8F6AC84A* a1, ::Class_5_0B648F1F8F6AC84A* a2, ::Class_5_0B648F1F8F6AC84A* a3, ::Class_5_0B648F1F8F6AC84A* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::Class_5_0B648F1F8F6AC84A*, ::Class_5_0B648F1F8F6AC84A*, ::Class_5_0B648F1F8F6AC84A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_DC7EC65F06E665E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_3BF77D5E9050BBD6(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3BF77D5E9050BBD6_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_E500E4D9531012D0_2(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E500E4D9531012D0_3(::Class_4_AC6D98911872E0CE* a1, ::Class_4_FE723876298B9E96* a2)
	{
		return ((::System::Boolean(*)(::Class_4_AC6D98911872E0CE*, ::Class_4_FE723876298B9E96*))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_E500E4D9531012D0_3_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_1_F6C54E799ECC0C30()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_F6C54E799ECC0C30_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::Class_5_0B648F1F8F6AC84A* Method_1_3705D76B9DF40917_3()
	{
		return ((::Class_5_0B648F1F8F6AC84A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_3705D76B9DF40917_3_OFFSET))(this);
	}

	static ::System::Boolean Method_1_52C0BD9A9B7CCE03(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_52C0BD9A9B7CCE03_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_95780ED94B90ED36_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04D71A1D7DB3D55_METHOD_1_95780ED94B90ED36_4_OFFSET))(this);
	}
};
