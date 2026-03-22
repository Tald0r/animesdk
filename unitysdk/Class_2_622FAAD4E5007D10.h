#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34_3.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_13.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_152.h"

class Class_0_16E4307DCC419505_13;
class Class_1_37A8069FEC1C5427;
class Class_2_AA2DF3435829EFF0_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_622FAAD4E5007D10_METHOD_2_86953C79667FC2E6_OFFSET UNITYSDK_OFFSET(0x1A2858B0)
#define CLASS_2_622FAAD4E5007D10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A285570)

inline static constexpr unsigned int Class_2_622FAAD4E5007D10_TypeDefinitionIndex = 79574;

class Class_2_622FAAD4E5007D10 : public ::Class_1_872037CA3D9BDC34_3
{
public:
	::Class_1_37A8069FEC1C5427* Field_2_0; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_13>* Field_2_1; // 0x50

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_152 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_152, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_622FAAD4E5007D10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_86953C79667FC2E6(::Class_2_AA2DF3435829EFF0_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_2*))((::PBYTE)hIl2Cpp + CLASS_2_622FAAD4E5007D10_METHOD_2_86953C79667FC2E6_OFFSET))(this, a1);
	}
};
