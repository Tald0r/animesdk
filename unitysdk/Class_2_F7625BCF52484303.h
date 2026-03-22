#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_17.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_7972A1813543C5F2;
class Class_3_060374069A831251;
class Class_3_AF7A56E03A4D3952;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Random; }
namespace FlowCanvas::Nodes { class SwitchBool; }
namespace FlowCanvas::Nodes { class SwitchProbability; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_F7625BCF52484303_METHOD_2_0352293D6055FB04_OFFSET UNITYSDK_OFFSET(0x9DEADC0)
#define CLASS_2_F7625BCF52484303_METHOD_2_03A5C1F702ECA3BF_OFFSET UNITYSDK_OFFSET(0x9DEB390)
#define CLASS_2_F7625BCF52484303_METHOD_2_0DE5215FBB1F145B_OFFSET UNITYSDK_OFFSET(0x9DED8B0)
#define CLASS_2_F7625BCF52484303_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x9DED180)
#define CLASS_2_F7625BCF52484303_METHOD_2_139E408F275FA971_OFFSET UNITYSDK_OFFSET(0x9DEC570)
#define CLASS_2_F7625BCF52484303_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9DEDC00)
#define CLASS_2_F7625BCF52484303_METHOD_2_1EE54D8B83A0D1F8_OFFSET UNITYSDK_OFFSET(0x9DEA580)
#define CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x9DED5A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9DEA9F0)
#define CLASS_2_F7625BCF52484303_METHOD_2_3F7C19E36BC696B6_OFFSET UNITYSDK_OFFSET(0x9DED0D0)
#define CLASS_2_F7625BCF52484303_METHOD_2_43BDC7C46D495B97_OFFSET UNITYSDK_OFFSET(0x9DED380)
#define CLASS_2_F7625BCF52484303_METHOD_2_4DC00CA0C895030D_OFFSET UNITYSDK_OFFSET(0x9DEDB60)
#define CLASS_2_F7625BCF52484303_METHOD_2_4EAE95CD498FBB45_OFFSET UNITYSDK_OFFSET(0x9DEBAC0)
#define CLASS_2_F7625BCF52484303_METHOD_2_53C39AEA87720AEC_OFFSET UNITYSDK_OFFSET(0x9DEA200)
#define CLASS_2_F7625BCF52484303_METHOD_2_6C84AD45A7CC2487_OFFSET UNITYSDK_OFFSET(0x9DEC730)
#define CLASS_2_F7625BCF52484303_METHOD_2_7A21A566EE0A6004_OFFSET UNITYSDK_OFFSET(0x9DECDF0)
#define CLASS_2_F7625BCF52484303_METHOD_2_865FE500C5B70580_OFFSET UNITYSDK_OFFSET(0x9DEA8E0)
#define CLASS_2_F7625BCF52484303_METHOD_2_959C7ACCFA5AB8B8_OFFSET UNITYSDK_OFFSET(0x9DEDC80)
#define CLASS_2_F7625BCF52484303_METHOD_2_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x9DEDC70)
#define CLASS_2_F7625BCF52484303_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x9DEC8D0)
#define CLASS_2_F7625BCF52484303_METHOD_2_AE2BD57E21DA9AEA_OFFSET UNITYSDK_OFFSET(0x9DEC120)
#define CLASS_2_F7625BCF52484303_METHOD_2_AFE8A031D1451F03_OFFSET UNITYSDK_OFFSET(0x9DEAD00)
#define CLASS_2_F7625BCF52484303_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x9DEBBB0)
#define CLASS_2_F7625BCF52484303_METHOD_2_BFC52765160CA6A4_OFFSET UNITYSDK_OFFSET(0x9DEBC20)
#define CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x9DEDBF0)
#define CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x9DEA570)
#define CLASS_2_F7625BCF52484303_METHOD_2_D70C8B847AF08ADE_1_OFFSET UNITYSDK_OFFSET(0x9DEC9A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x9DEA7A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_DC05E2E84030F62A_OFFSET UNITYSDK_OFFSET(0x9DEC030)
#define CLASS_2_F7625BCF52484303_METHOD_2_E16108D9CC30CB20_OFFSET UNITYSDK_OFFSET(0x9DEA6F0)
#define CLASS_2_F7625BCF52484303_METHOD_2_E8125F80C16C0BDE_OFFSET UNITYSDK_OFFSET(0x9DEB5A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x9DED0C0)
#define CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x9DED0B0)
#define CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9DED0A0)
#define CLASS_2_F7625BCF52484303_METHOD_2_F7787061DADB4810_OFFSET UNITYSDK_OFFSET(0x9DEAF80)
#define CLASS_2_F7625BCF52484303_METHOD_2_FCAD503D9FF18E1A_OFFSET UNITYSDK_OFFSET(0x9DEB690)
#define CLASS_2_F7625BCF52484303_METHOD_2_FD166F2DC7A64B9A_OFFSET UNITYSDK_OFFSET(0x9DECAE0)
#define CLASS_2_F7625BCF52484303__CTOR_OFFSET UNITYSDK_OFFSET(0x9DEA010)

inline static constexpr unsigned int Class_2_F7625BCF52484303_TypeDefinitionIndex = 68866;

class Class_2_F7625BCF52484303 : public ::Foundation::Singleton_1<::Class_2_F7625BCF52484303*>
{
public:
	::FlowCanvas::FlowNode* Field_2_6; // 0x10
	::System::Collections::Generic::HashSet_1<::FlowCanvas::FlowNode*>* Field_2_9; // 0x18
	::Class_3_060374069A831251* Field_2_2; // 0x20
	::Class_1_7972A1813543C5F2* Field_2_14; // 0x28
	::System::Collections::Generic::Queue_1<::Class_3_060374069A831251*>* Field_2_3; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_2_12; // 0x38
	::FlowCanvas::FlowNode* Field_2_5; // 0x40
	::FlowCanvas::FlowNode* Field_2_4; // 0x48
	::System::Action* Field_2_0; // 0x50
	::NodeCanvas::Framework::Graph* Field_2_13; // 0x58
	::System::Boolean Field_2_1; // 0x60
	::System::Boolean Field_2_10; // 0x61
	::System::Boolean Field_2_7; // 0x62
	::System::Boolean Field_2_8; // 0x63
	::System::UInt64 Field_2_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_53C39AEA87720AEC(::FlowCanvas::FlowInput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowInput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_53C39AEA87720AEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EE54D8B83A0D1F8(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_1EE54D8B83A0D1F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E16108D9CC30CB20(::FlowCanvas::FlowNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E16108D9CC30CB20_OFFSET))(this, a1);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Boolean Method_2_865FE500C5B70580(::System::UInt64 a1, ::System::String* a2, ::Class_3_060374069A831251*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::Class_3_060374069A831251*&))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_865FE500C5B70580_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_0352293D6055FB04(::FlowCanvas::FlowNode* a1, ::Enum_3_4608E37A1B3D374A_17 a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::Enum_3_4608E37A1B3D374A_17, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0352293D6055FB04_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_F7787061DADB4810(::FlowCanvas::Nodes::SwitchProbability* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F7787061DADB4810_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_FCAD503D9FF18E1A(::FlowCanvas::Nodes::SwitchBool* a1, ::FlowCanvas::Flow a2, ::FlowCanvas::FlowOutput* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_FCAD503D9FF18E1A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Boolean Method_2_BFC52765160CA6A4(::FlowCanvas::Nodes::Random* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_BFC52765160CA6A4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AE2BD57E21DA9AEA(::System::UInt64 a1, ::System::String* a2, ::System::Nullable_1<::System::Int32> a3, ::System::Nullable_1<::System::Int32> a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_AE2BD57E21DA9AEA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Collections::IEnumerator* Method_2_4EAE95CD498FBB45(::FlowCanvas::Nodes::SwitchBool* a1, ::FlowCanvas::Flow a2, ::FlowCanvas::FlowOutput* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::SwitchBool*, ::FlowCanvas::Flow, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_4EAE95CD498FBB45_OFFSET))(this, a1, a2, a3);
	}

	::NodeCanvas::Framework::Node* Method_2_139E408F275FA971(::System::UInt64 a1)
	{
		return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_139E408F275FA971_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C84AD45A7CC2487(::Class_3_AF7A56E03A4D3952* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_6C84AD45A7CC2487_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_FD166F2DC7A64B9A(::Class_3_060374069A831251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_060374069A831251*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_FD166F2DC7A64B9A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7A21A566EE0A6004(::System::UInt64 a1, ::System::String* a2, ::Class_3_060374069A831251*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::Class_3_060374069A831251*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_7A21A566EE0A6004_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_03A5C1F702ECA3BF(::FlowCanvas::FlowNode* a1, ::System::Nullable_1<::System::Int32> a2, ::System::Nullable_1<::System::Int32> a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_03A5C1F702ECA3BF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_E8125F80C16C0BDE(::FlowCanvas::Nodes::SwitchProbability* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::SwitchProbability*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E8125F80C16C0BDE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D70C8B847AF08ADE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_D70C8B847AF08ADE_1_OFFSET))(this);
	}

	::System::Action* Method_2_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Void Method_2_3F7C19E36BC696B6(::Class_3_060374069A831251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_060374069A831251*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_3F7C19E36BC696B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AFE8A031D1451F03()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_AFE8A031D1451F03_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::String* Method_2_43BDC7C46D495B97(::System::UInt64 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_43BDC7C46D495B97_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_2_0DE5215FBB1F145B(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_0DE5215FBB1F145B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DC00CA0C895030D(::System::UInt64 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_4DC00CA0C895030D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Void Method_2_959C7ACCFA5AB8B8(::FlowCanvas::FlowOutput* a1, ::FlowCanvas::FlowNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_959C7ACCFA5AB8B8_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_DC05E2E84030F62A(::FlowCanvas::Nodes::Random* a1, ::FlowCanvas::Flow a2, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_METHOD_2_DC05E2E84030F62A_OFFSET))(this, a1, a2, a3);
	}
};
