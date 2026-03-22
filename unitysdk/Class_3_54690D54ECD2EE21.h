#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_54690D54ECD2EE21_METHOD_3_45553DBC61F5F291_OFFSET UNITYSDK_OFFSET(0x89BDF00)
#define CLASS_3_54690D54ECD2EE21_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x89BDE40)
#define CLASS_3_54690D54ECD2EE21_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x89BE260)
#define CLASS_3_54690D54ECD2EE21__CTOR_OFFSET UNITYSDK_OFFSET(0x89BE1C0)

inline static constexpr unsigned int Class_3_54690D54ECD2EE21_TypeDefinitionIndex = 46156;

class Class_3_54690D54ECD2EE21 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_45553DBC61F5F291(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_45553DBC61F5F291_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54690D54ECD2EE21_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
