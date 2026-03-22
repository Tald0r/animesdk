#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_224C5656E48B25DB.h"

namespace MoleMole { class EventRange; }

#define CLASS_3_AB79E5D347125DDE_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9E218E0)
#define CLASS_3_AB79E5D347125DDE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E219B0)
#define CLASS_3_AB79E5D347125DDE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9E21890)
#define CLASS_3_AB79E5D347125DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E218A0)

inline static constexpr unsigned int Class_3_AB79E5D347125DDE_TypeDefinitionIndex = 63272;

class Class_3_AB79E5D347125DDE : public ::Class_2_224C5656E48B25DB
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::MoleMole::EventRange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + CLASS_3_AB79E5D347125DDE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB79E5D347125DDE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB79E5D347125DDE_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB79E5D347125DDE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
