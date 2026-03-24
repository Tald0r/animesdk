#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_7EB62F550E616822_OFFSET UNITYSDK_OFFSET(0x8238980)
#define CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x82388C0)
#define CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8238E10)
#define CLASS_3_F0DA4A32D2FB1EEA__CTOR_OFFSET UNITYSDK_OFFSET(0x8238D70)

inline static constexpr unsigned int Class_3_F0DA4A32D2FB1EEA_TypeDefinitionIndex = 71363;

class Class_3_F0DA4A32D2FB1EEA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0DA4A32D2FB1EEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_7EB62F550E616822(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_7EB62F550E616822_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0DA4A32D2FB1EEA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
