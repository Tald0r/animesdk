#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"

class Class_1_A8E94BAAEBB55F9A;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET UNITYSDK_OFFSET(0xD74F070)
#define CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET UNITYSDK_OFFSET(0xD74F1D0)
#define CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET UNITYSDK_OFFSET(0xD74F1C0)

inline static constexpr unsigned int Class_2_C56B00FCBF52EB1F_TypeDefinitionIndex = 43385;

class Class_2_C56B00FCBF52EB1F : public ::Class_1_953952658186A166
{
public:
	::Class_5_AF65C3A968E836D2* Field_2_0; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_486B44A9314F3615(::Class_1_A8E94BAAEBB55F9A* a1, ::Struct_2_6E1B724B14572104_1& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A8E94BAAEBB55F9A*, ::Struct_2_6E1B724B14572104_1&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_486B44A9314F3615_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_C56B00FCBF52EB1F* Method_2_63503EE3B2AB63BD(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Class_2_C56B00FCBF52EB1F*(*)(::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_2_C56B00FCBF52EB1F_METHOD_2_63503EE3B2AB63BD_OFFSET))(a1);
	}
};
