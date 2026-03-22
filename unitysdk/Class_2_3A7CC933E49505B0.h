#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_4AAA2F4694F9E394.h"
#include "unitysdk/Class_2_3A7CC933E49505B0_Enum_3_B1614BD6D0C3A72F.h"
#include "unitysdk/Class_2_3A7CC933E49505B0_Struct_2_0839504A496058D2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_17.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_79526D80B8F6897C;
class Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1;
class Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1;
class Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA;
class Class_3_F118437738B4CCD5_4;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3A7CC933E49505B0_METHOD_2_09834DF3A9D4F16E_OFFSET UNITYSDK_OFFSET(0x7010860)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_0D51D68C77FB9285_OFFSET UNITYSDK_OFFSET(0x7015140)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_111CD1535F7BCC98_OFFSET UNITYSDK_OFFSET(0x7015370)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_179AC328238EED01_OFFSET UNITYSDK_OFFSET(0x700F840)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_1AAFBE95CDB0E5AF_OFFSET UNITYSDK_OFFSET(0x700FF80)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_2F7D79858AF5CD28_OFFSET UNITYSDK_OFFSET(0x7014850)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x70145D0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_46435E0FFB253BF2_OFFSET UNITYSDK_OFFSET(0x7011A10)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_6FBA0089A0B01DD8_OFFSET UNITYSDK_OFFSET(0x70118C0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x700EC70)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_75F0C943CB29A436_OFFSET UNITYSDK_OFFSET(0x70141F0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x7013F90)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_7C90B2CC8BB400AE_OFFSET UNITYSDK_OFFSET(0x700F1C0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_80553C28E2767A41_OFFSET UNITYSDK_OFFSET(0x7014CC0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_924246226C475DF9_OFFSET UNITYSDK_OFFSET(0x7010FE0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A1A769D0E4448D49_OFFSET UNITYSDK_OFFSET(0x7011460)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x700EEA0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A799B17DDBC2AB8A_OFFSET UNITYSDK_OFFSET(0x7010B10)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0x7010090)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x7014AF0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_A9D74EF2996A11F3_OFFSET UNITYSDK_OFFSET(0x70111D0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_BA244C9706D3E2B7_OFFSET UNITYSDK_OFFSET(0x700F680)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_BA97894077501E32_OFFSET UNITYSDK_OFFSET(0x70142A0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_BC71F75F8E31144B_1_OFFSET UNITYSDK_OFFSET(0x70147E0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x70140B0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_C65A5E9E738901A4_OFFSET UNITYSDK_OFFSET(0x700F7C0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_C9D6F9890A05C022_OFFSET UNITYSDK_OFFSET(0x7010F40)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7010AB0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x700F620)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_D57482B4180D2AAB_OFFSET UNITYSDK_OFFSET(0x7015810)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_D9E7B498543EB0FD_OFFSET UNITYSDK_OFFSET(0x70154F0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_E7B1FE549055A555_OFFSET UNITYSDK_OFFSET(0x70149E0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_ED3A95022CA9C249_OFFSET UNITYSDK_OFFSET(0x70103D0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x7010300)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x7014E40)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_F516A972CB7F6525_OFFSET UNITYSDK_OFFSET(0x7011B50)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_F8302278BD739CE7_OFFSET UNITYSDK_OFFSET(0x700F4E0)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_FCDB7C55EB16CF5F_OFFSET UNITYSDK_OFFSET(0x7011F80)
#define CLASS_2_3A7CC933E49505B0_METHOD_2_FDF3FD3EF898CEA4_OFFSET UNITYSDK_OFFSET(0x7014120)
#define CLASS_2_3A7CC933E49505B0__CTOR_OFFSET UNITYSDK_OFFSET(0x700F0D0)

inline static constexpr unsigned int Class_2_3A7CC933E49505B0_TypeDefinitionIndex = 61372;

class Class_2_3A7CC933E49505B0 : public ::Class_1_8A3658A741325FC2
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*>* Field_2_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>* Field_2_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_79526D80B8F6897C*>* Field_2_6; // 0x30
	::System::Int64 Field_2_2; // 0x38
	::System::Int64 Field_2_1; // 0x40
	::System::Boolean Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Boolean Method_2_7C90B2CC8BB400AE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_7C90B2CC8BB400AE_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*> Method_2_F8302278BD739CE7(::System::Int32 a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_F8302278BD739CE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>> Method_2_BA244C9706D3E2B7(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_BA244C9706D3E2B7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C65A5E9E738901A4(::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_C65A5E9E738901A4_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*>> Method_2_1AAFBE95CDB0E5AF(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*>>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_1AAFBE95CDB0E5AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7B0EF5061C2B565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A7B0EF5061C2B565_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_F39234F2606D8D97_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>* Method_2_ED3A95022CA9C249(::Newtonsoft::Json::Linq::JToken* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_ED3A95022CA9C249_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A799B17DDBC2AB8A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A799B17DDBC2AB8A_OFFSET))(this, a1);
	}

	static ::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA* Method_2_924246226C475DF9(::Newtonsoft::Json::Linq::JToken* a1)
	{
		return ((::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_924246226C475DF9_OFFSET))(a1);
	}

	::Class_2_3A7CC933E49505B0_Enum_3_B1614BD6D0C3A72F Method_2_179AC328238EED01(::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1* a1)
	{
		return ((::Class_2_3A7CC933E49505B0_Enum_3_B1614BD6D0C3A72F(*)(::PVOID, ::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_179AC328238EED01_OFFSET))(this, a1);
	}

	::Class_1_79526D80B8F6897C* Method_2_A9D74EF2996A11F3(::System::Int32 a1)
	{
		return ((::Class_1_79526D80B8F6897C*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A9D74EF2996A11F3_OFFSET))(this, a1);
	}

	static ::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1* Method_2_09834DF3A9D4F16E(::Newtonsoft::Json::Linq::JToken* a1)
	{
		return ((::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*(*)(::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_09834DF3A9D4F16E_OFFSET))(a1);
	}

	::System::Void Method_2_6FBA0089A0B01DD8(::Class_2_3A7CC933E49505B0_Struct_2_0839504A496058D2& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3A7CC933E49505B0_Struct_2_0839504A496058D2&))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_6FBA0089A0B01DD8_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>> Method_2_46435E0FFB253BF2(::System::Int32 a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67_1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_46435E0FFB253BF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F516A972CB7F6525(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>* a2, ::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>*, ::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_F516A972CB7F6525_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_3_F118437738B4CCD5_4*>* Method_2_FCDB7C55EB16CF5F(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>* a2, ::Enum_3_0A3761FE34514D6C_17 a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_F118437738B4CCD5_4*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>*, ::Enum_3_0A3761FE34514D6C_17, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_FCDB7C55EB16CF5F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_2_75F0C943CB29A436(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_75F0C943CB29A436_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA97894077501E32(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_BA97894077501E32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9D6F9890A05C022(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_C9D6F9890A05C022_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_2F7D79858AF5CD28(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_2F7D79858AF5CD28_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_E7B1FE549055A555(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_E7B1FE549055A555_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::Class_2_3A7CC933E49505B0_Enum_3_B1614BD6D0C3A72F Method_2_80553C28E2767A41(::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>* a1)
	{
		return ((::Class_2_3A7CC933E49505B0_Enum_3_B1614BD6D0C3A72F(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_80553C28E2767A41_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	static ::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1* Method_2_A1A769D0E4448D49(::Newtonsoft::Json::Linq::JToken* a1, ::System::Int32 a2)
	{
		return ((::Class_2_3A7CC933E49505B0_Class_1_8C92669D4140023D_1*(*)(::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_A1A769D0E4448D49_OFFSET))(a1, a2);
	}

	::System::Void Method_2_0D51D68C77FB9285(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_0D51D68C77FB9285_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_111CD1535F7BCC98(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_111CD1535F7BCC98_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BC71F75F8E31144B_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_BC71F75F8E31144B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9E7B498543EB0FD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_D9E7B498543EB0FD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FDF3FD3EF898CEA4(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_FDF3FD3EF898CEA4_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_1_ABB13E12DFC246CE_Enum_3_4AAA2F4694F9E394> Method_2_D57482B4180D2AAB(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_1_ABB13E12DFC246CE_Enum_3_4AAA2F4694F9E394>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3A7CC933E49505B0_METHOD_2_D57482B4180D2AAB_OFFSET))(this, a1, a2);
	}
};
