#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
class Class_5_12295D592E32B8BA;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET UNITYSDK_OFFSET(0x7DCFF40)
#define CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET UNITYSDK_OFFSET(0x7DCFF30)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_7DF9AF2BB910205D_TypeDefinitionIndex = 42039;

class Class_5_12295D592E32B8BA_Class_1_7DF9AF2BB910205D : public ::System::Object
{
public:
	::Class_5_12295D592E32B8BA* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x18
	::Class_5_AF65C3A968E836D2* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71BB222C65B6343D(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET))(this, a1);
	}
};
