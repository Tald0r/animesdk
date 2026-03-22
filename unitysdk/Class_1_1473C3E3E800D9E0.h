#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"
#include "unitysdk/System/Object.h"

class Class_1_A617B16EB30351B4;
class Class_1_D78EEB0971654883;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1473C3E3E800D9E0_METHOD_1_1DB96A2758C8B527_OFFSET UNITYSDK_OFFSET(0x64301C0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_3C78F415A9C03C4D_OFFSET UNITYSDK_OFFSET(0x64301B0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x6430190)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x64301A0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_A5543C9956E0BAA6_OFFSET UNITYSDK_OFFSET(0x642FEC0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_A9997AC370F7BEA8_OFFSET UNITYSDK_OFFSET(0x64302D0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_AAB958C808A9F6D2_OFFSET UNITYSDK_OFFSET(0x6430010)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_E800F4BD1F795C9A_OFFSET UNITYSDK_OFFSET(0x6430020)
#define CLASS_1_1473C3E3E800D9E0__CTOR_OFFSET UNITYSDK_OFFSET(0x642FE20)

inline static constexpr unsigned int Class_1_1473C3E3E800D9E0_TypeDefinitionIndex = 64274;

class Class_1_1473C3E3E800D9E0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_A617B16EB30351B4*>* Field_1_2; // 0x10
	::Struct_2_02E84E3D148EE908 Field_1_1; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D78EEB0971654883* Method_1_A5543C9956E0BAA6()
	{
		return ((::Class_1_D78EEB0971654883*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_A5543C9956E0BAA6_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_1_AAB958C808A9F6D2()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_AAB958C808A9F6D2_OFFSET))(this);
	}

	::System::Void Method_1_E800F4BD1F795C9A(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_A617B16EB30351B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_A617B16EB30351B4*))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_E800F4BD1F795C9A_OFFSET))(this, a1, a2);
	}

	::Struct_2_02E84E3D148EE908 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_02E84E3D148EE908(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_02E84E3D148EE908 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C78F415A9C03C4D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_3C78F415A9C03C4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DB96A2758C8B527(::Struct_2_02E84E3D148EE908 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_1DB96A2758C8B527_OFFSET))(this, a1);
	}

	::Class_1_A617B16EB30351B4* Method_1_A9997AC370F7BEA8(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_A617B16EB30351B4*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_A9997AC370F7BEA8_OFFSET))(this, a1);
	}
};
