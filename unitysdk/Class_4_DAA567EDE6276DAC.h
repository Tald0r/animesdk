#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_DAA567EDE6276DAC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x680F1D0)
#define CLASS_4_DAA567EDE6276DAC_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x680ED30)
#define CLASS_4_DAA567EDE6276DAC_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x680EE90)
#define CLASS_4_DAA567EDE6276DAC_METHOD_4_AF5420F4225611AD_OFFSET UNITYSDK_OFFSET(0x680EF20)
#define CLASS_4_DAA567EDE6276DAC__CTOR_OFFSET UNITYSDK_OFFSET(0x680F0E0)

inline static constexpr unsigned int Class_4_DAA567EDE6276DAC_TypeDefinitionIndex = 51066;

class Class_4_DAA567EDE6276DAC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAA567EDE6276DAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAA567EDE6276DAC_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_DAA567EDE6276DAC_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DAA567EDE6276DAC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_AF5420F4225611AD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_DAA567EDE6276DAC_METHOD_4_AF5420F4225611AD_OFFSET))(this, a1);
	}
};
