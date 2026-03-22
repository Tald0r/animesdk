#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_5A18DE10D020A50F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x6739FE0)
#define CLASS_4_5A18DE10D020A50F_METHOD_4_2961874C51FB08A8_OFFSET UNITYSDK_OFFSET(0x6739D00)
#define CLASS_4_5A18DE10D020A50F_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x6739C30)
#define CLASS_4_5A18DE10D020A50F__CTOR_OFFSET UNITYSDK_OFFSET(0x6739F40)

inline static constexpr unsigned int Class_4_5A18DE10D020A50F_TypeDefinitionIndex = 48081;

class Class_4_5A18DE10D020A50F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A18DE10D020A50F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A18DE10D020A50F_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_2961874C51FB08A8(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_5A18DE10D020A50F_METHOD_4_2961874C51FB08A8_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5A18DE10D020A50F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
