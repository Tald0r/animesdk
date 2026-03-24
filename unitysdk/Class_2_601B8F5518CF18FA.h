#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A.h"

namespace MoleMole { class UIHollowMainPageContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_601B8F5518CF18FA_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x92CA0A0)
#define CLASS_2_601B8F5518CF18FA_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x92C9ED0)
#define CLASS_2_601B8F5518CF18FA_METHOD_2_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x92C9F50)
#define CLASS_2_601B8F5518CF18FA_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x92CA090)
#define CLASS_2_601B8F5518CF18FA_METHOD_2_D516C68C85520F4E_OFFSET UNITYSDK_OFFSET(0x92C9EE0)
#define CLASS_2_601B8F5518CF18FA__CTOR_OFFSET UNITYSDK_OFFSET(0x92C9FC0)

inline static constexpr unsigned int Class_2_601B8F5518CF18FA_TypeDefinitionIndex = 46199;

class Class_2_601B8F5518CF18FA : public ::Class_1_3002D7CF5FEE9D3A
{
public:
	::MoleMole::UIHollowMainPageContext* Field_2_0; // 0x90
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_2_1; // 0x98
	::System::Int32 Field_2_3; // 0xA0
	::System::Boolean Field_2_2; // 0xA4
	::System::Int32 Field_2_4; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA__CTOR_OFFSET))(this);
	}

	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_2_D516C68C85520F4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA_METHOD_2_D516C68C85520F4E_OFFSET))(this);
	}

	::System::Void Method_2_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA_METHOD_2_9B6BAF49879647BD_OFFSET))(this);
	}

	::System::Void Method_2_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA_METHOD_2_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_601B8F5518CF18FA_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}
};
