#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_263;
class Class_1_CB1D9942A98A3EC3;
class Class_3_3C27FB03C7F640D0_14;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3C4C8E094FA8757_METHOD_1_5BF21785E70F22E8_OFFSET UNITYSDK_OFFSET(0x63B1100)
#define CLASS_1_A3C4C8E094FA8757_METHOD_1_C0AAD401F117026A_OFFSET UNITYSDK_OFFSET(0x63B12A0)
#define CLASS_1_A3C4C8E094FA8757_METHOD_1_FA305760E151D93F_OFFSET UNITYSDK_OFFSET(0x63B1180)
#define CLASS_1_A3C4C8E094FA8757__CTOR_OFFSET UNITYSDK_OFFSET(0x63B1290)

inline static constexpr unsigned int Class_1_A3C4C8E094FA8757_TypeDefinitionIndex = 64266;

class Class_1_A3C4C8E094FA8757 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C4C8E094FA8757__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_263*>* Method_1_5BF21785E70F22E8(::Class_1_CB1D9942A98A3EC3* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_263*>*(*)(::PVOID, ::Class_1_CB1D9942A98A3EC3*))((::PBYTE)hIl2Cpp + CLASS_1_A3C4C8E094FA8757_METHOD_1_5BF21785E70F22E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0AAD401F117026A(::Class_3_3C27FB03C7F640D0_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_A3C4C8E094FA8757_METHOD_1_C0AAD401F117026A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_263*>* Method_1_FA305760E151D93F(::Class_3_3C27FB03C7F640D0_14* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_263*>*(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_14*))((::PBYTE)hIl2Cpp + CLASS_1_A3C4C8E094FA8757_METHOD_1_FA305760E151D93F_OFFSET))(this, a1);
	}
};
