#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D719B19388CDBB0F.h"
#include "unitysdk/Enum_3_5B461AA5B626CCC4.h"
#include "unitysdk/Enum_3_FFDA1BC86801C428.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"

class Class_1_370F46F5B758DE19;
class Class_1_6D6D57236F24B8FC;
class Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6;
class Class_2_0BFD272AEB34F867;
class Class_2_AB4261DB06E3A6BD;
class Class_2_C03EC65F99EF4B16;
class Class_2_F5737224A0253470;
class Class_2_FFB447330BDBA334;
class Class_4_B1EAD8476216C1D8;
class Class_4_B99AA5AE371451AA;
class Class_5_A53BB84C10BA182D_Class_1_E029E060C37758DE;
class Class_5_AF65C3A968E836D2;
class Class_5_F60EFCE4D76BF533;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_1_OFFSET UNITYSDK_OFFSET(0xB2E78C0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_OFFSET UNITYSDK_OFFSET(0xB2E70B0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xB2E7120)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_154F50C0B01C1605_OFFSET UNITYSDK_OFFSET(0xB2E62B0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xB2E7B30)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_2D9AE5A5555A322A_OFFSET UNITYSDK_OFFSET(0xB2E86A0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_3C5C4D9893FF85A3_OFFSET UNITYSDK_OFFSET(0xB2E8400)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0xB2E7770)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_5CCA76F0013862B2_OFFSET UNITYSDK_OFFSET(0xB2E61A0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_6755F46E8DF0FBD2_OFFSET UNITYSDK_OFFSET(0xB2E7B40)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xB2E8690)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_A00BBF86AFD8329F_OFFSET UNITYSDK_OFFSET(0xB2E7860)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_EED30E97B7EB7A38_OFFSET UNITYSDK_OFFSET(0xB2E7930)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_FAD66108D9E5F015_OFFSET UNITYSDK_OFFSET(0xB2EAF40)
#define CLASS_5_A53BB84C10BA182D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2E76E0)
#define CLASS_5_A53BB84C10BA182D__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E7300)

inline static constexpr unsigned int Class_5_A53BB84C10BA182D_TypeDefinitionIndex = 55176;

class Class_5_A53BB84C10BA182D : public ::Class_4_D719B19388CDBB0F
{
public:
	static ::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6** StaticGet_Field_5_4()
	{
		return (::Class_1_86A85CB5038B7046_Class_3_8A15F387AB2587C6**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A53BB84C10BA182D_TypeDefinitionIndex)->GetStaticField(0x30190);
	}
	::System::Collections::Generic::Queue_1<::Class_5_A53BB84C10BA182D_Class_1_E029E060C37758DE*>* Field_5_2; // 0x30
	::System::Collections::Generic::List_1<::Enum_3_FFDA1BC86801C428>* Field_5_0; // 0x38
	::Class_2_F5737224A0253470* Field_5_8; // 0x40
	::Class_1_370F46F5B758DE19* Field_5_3; // 0x48
	::MoleMole::Config::ConfigHollowChessboard* Field_5_7; // 0x50
	::Class_2_C03EC65F99EF4B16* Field_5_9; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_5_1; // 0x60
	::Class_2_0BFD272AEB34F867* Field_5_10; // 0x68
	::Class_2_AB4261DB06E3A6BD* Field_5_5; // 0x70
	::System::Boolean Field_5_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_5_5CCA76F0013862B2(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_5CCA76F0013862B2_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_042161E3ACC3627B(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
	}

	::Class_5_AF65C3A968E836D2* Method_5_A00BBF86AFD8329F()
	{
		return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_A00BBF86AFD8329F_OFFSET))(this);
	}

	::System::Int32 Method_5_042161E3ACC3627B_1(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_5_EED30E97B7EB7A38(::Class_1_6D6D57236F24B8FC* a1, ::System::Action_1<::Class_1_6D6D57236F24B8FC*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D6D57236F24B8FC*, ::System::Action_1<::Class_1_6D6D57236F24B8FC*>*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_EED30E97B7EB7A38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_154F50C0B01C1605(::Class_4_B1EAD8476216C1D8* a1, ::Class_1_6D6D57236F24B8FC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::Class_1_6D6D57236F24B8FC*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_154F50C0B01C1605_OFFSET))(this, a1, a2);
	}

	::Class_1_370F46F5B758DE19* Method_5_24748FC20F375725()
	{
		return ((::Class_1_370F46F5B758DE19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_5_6755F46E8DF0FBD2(::Class_4_B1EAD8476216C1D8* a1, ::Class_4_B99AA5AE371451AA* a2, ::Class_5_F60EFCE4D76BF533* a3, ::MoleMole::PlayerOnViewState a4, ::Enum_3_5B461AA5B626CCC4 a5, ::System::Boolean a6, ::MoleMole::HollowChessboard::HollowCell a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::Class_4_B99AA5AE371451AA*, ::Class_5_F60EFCE4D76BF533*, ::MoleMole::PlayerOnViewState, ::Enum_3_5B461AA5B626CCC4, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_6755F46E8DF0FBD2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::ProtoScript::HollowEntityType Method_5_3C5C4D9893FF85A3(::System::UInt32 a1)
	{
		return ((::ProtoScript::HollowEntityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_3C5C4D9893FF85A3_OFFSET))(a1);
	}

	::System::Void Method_5_8C8625211DA811AE(::Class_1_370F46F5B758DE19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370F46F5B758DE19*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_5_2D9AE5A5555A322A(::Class_4_B1EAD8476216C1D8* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Enum_3_5B461AA5B626CCC4 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_5B461AA5B626CCC4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_2D9AE5A5555A322A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_FAD66108D9E5F015(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_FAD66108D9E5F015_OFFSET))(this, a1);
	}
};
