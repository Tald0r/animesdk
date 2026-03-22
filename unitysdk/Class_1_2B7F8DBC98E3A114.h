#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE.h"
#include "unitysdk/Enum_3_010E9109C73EF1D1.h"
#include "unitysdk/Enum_3_231342C5F8BF8D7C.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/UIAdaptData_Enum_3_39283DF3D247B462.h"
#include "unitysdk/MoleMole/UIAspectRatioHandler_Enum_3_8133209C937485A0.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB;
class Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7;
class Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149;
class Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3;
class Class_1_7471DEF8EA38C73D;
class Class_1_FC3A9C07FC781527;
namespace MoleMole { class UIAdaptData; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIBlackEdge; }
namespace MoleMole { class UIButtonPosDummyDialogPopWindowController; }
namespace MoleMole { class UIFormalVersionTipsPopWindowController; }
namespace MoleMole { class UIHorizontalBlackEdge; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET UNITYSDK_OFFSET(0xB108E00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xB100DA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_1_OFFSET UNITYSDK_OFFSET(0xB106590)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_2_OFFSET UNITYSDK_OFFSET(0xB10A4C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_3_OFFSET UNITYSDK_OFFSET(0xB10BA50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_OFFSET UNITYSDK_OFFSET(0xB104AD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET UNITYSDK_OFFSET(0xD23FF10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0A47EEFB8676CAB5_OFFSET UNITYSDK_OFFSET(0xB1070B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0A5213CB8CB2A5BD_OFFSET UNITYSDK_OFFSET(0xB104E30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET UNITYSDK_OFFSET(0xB10CFB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET UNITYSDK_OFFSET(0xB106050)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0F24D55EF44F180D_OFFSET UNITYSDK_OFFSET(0xB111B20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0FD0EC313FAAB75A_1_OFFSET UNITYSDK_OFFSET(0xB10EA10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xB102340)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_1_OFFSET UNITYSDK_OFFSET(0xB10B040)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_OFFSET UNITYSDK_OFFSET(0xB10A380)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xB1118A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB101CC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_14209EB871F2D390_OFFSET UNITYSDK_OFFSET(0xB10CDB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET UNITYSDK_OFFSET(0xB1051E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET UNITYSDK_OFFSET(0xB10BDB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET UNITYSDK_OFFSET(0xB10FE70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET UNITYSDK_OFFSET(0xB103CC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xB106FD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1CA52BD2DC0391D7_OFFSET UNITYSDK_OFFSET(0xB102E80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xD240BA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1EAE975500964E93_OFFSET UNITYSDK_OFFSET(0xB1098D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1EB1C7990BDD71EC_OFFSET UNITYSDK_OFFSET(0xB1012A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1FB03302975E8E7C_OFFSET UNITYSDK_OFFSET(0xB10F550)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET UNITYSDK_OFFSET(0xB10A030)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_226F30E5646F3210_1_OFFSET UNITYSDK_OFFSET(0xB10A9A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_226F30E5646F3210_OFFSET UNITYSDK_OFFSET(0xD240790)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xB110DC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET UNITYSDK_OFFSET(0xD23F340)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET UNITYSDK_OFFSET(0xB104F90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2AE479E81567F67B_OFFSET UNITYSDK_OFFSET(0xB10BF00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET UNITYSDK_OFFSET(0xB1059F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET UNITYSDK_OFFSET(0xB106240)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0xB1074D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET UNITYSDK_OFFSET(0xB111A60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET UNITYSDK_OFFSET(0xB1061E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB110240)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET UNITYSDK_OFFSET(0xB10EF00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET UNITYSDK_OFFSET(0xB109580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0xB1111C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET UNITYSDK_OFFSET(0xB104EB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0xB10B5D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0xB110C60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET UNITYSDK_OFFSET(0xB105320)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET UNITYSDK_OFFSET(0xB10D580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0xB10B180)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET UNITYSDK_OFFSET(0xB102010)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET UNITYSDK_OFFSET(0xB1057C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_46771E8BDEC25066_OFFSET UNITYSDK_OFFSET(0xD240560)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4852C8351A25DF62_OFFSET UNITYSDK_OFFSET(0xB10D790)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET UNITYSDK_OFFSET(0xD23F950)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET UNITYSDK_OFFSET(0xB10D0F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET UNITYSDK_OFFSET(0xB1094E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET UNITYSDK_OFFSET(0xB110580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET UNITYSDK_OFFSET(0xB108190)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB105700)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET UNITYSDK_OFFSET(0xB110F10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET UNITYSDK_OFFSET(0xB10D050)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET UNITYSDK_OFFSET(0xD2410D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET UNITYSDK_OFFSET(0xB110420)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET UNITYSDK_OFFSET(0xB100E00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xB108AC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6517221FCA930E60_OFFSET UNITYSDK_OFFSET(0xB112630)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_1_OFFSET UNITYSDK_OFFSET(0xB1062A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_2_OFFSET UNITYSDK_OFFSET(0xB1116D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET UNITYSDK_OFFSET(0xB101800)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6915D550D4431B85_OFFSET UNITYSDK_OFFSET(0xB111280)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0xB102190)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xB10E7D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xB111CD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6E94FC77130235DD_OFFSET UNITYSDK_OFFSET(0xD241170)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET UNITYSDK_OFFSET(0xD23F580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_747C3094A8E290AF_OFFSET UNITYSDK_OFFSET(0xB10FA10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7851676584A3B118_OFFSET UNITYSDK_OFFSET(0xB10FD10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xB104790)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET UNITYSDK_OFFSET(0xB10B2F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET UNITYSDK_OFFSET(0xB10E3B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET UNITYSDK_OFFSET(0xB1121D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0xB108E60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB105570)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_80D03FA8B547CE58_OFFSET UNITYSDK_OFFSET(0xB102580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET UNITYSDK_OFFSET(0xB103660)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET UNITYSDK_OFFSET(0xB110A00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET UNITYSDK_OFFSET(0xB105940)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB10DBC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET UNITYSDK_OFFSET(0xB1124B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET UNITYSDK_OFFSET(0xB103B30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET UNITYSDK_OFFSET(0xD2403C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89996C33D1692FDA_OFFSET UNITYSDK_OFFSET(0xB103DA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89AE11094F43AC85_OFFSET UNITYSDK_OFFSET(0xB10A110)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9411E558238384F8_OFFSET UNITYSDK_OFFSET(0xB1087D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_946E893B542F1A3F_OFFSET UNITYSDK_OFFSET(0xB1019D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET UNITYSDK_OFFSET(0xB105760)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET UNITYSDK_OFFSET(0xB10D520)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xB111AC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET UNITYSDK_OFFSET(0xD240470)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9D4CA6C4FBD9AC35_OFFSET UNITYSDK_OFFSET(0xB110AB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET UNITYSDK_OFFSET(0xB10B9F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A4FA56A22F7FEA63_OFFSET UNITYSDK_OFFSET(0xB102C10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A69FA5E6168C596B_OFFSET UNITYSDK_OFFSET(0xB104FF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0xB10DA50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET UNITYSDK_OFFSET(0xB105FB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET UNITYSDK_OFFSET(0xB10F4D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xB10D150)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB101180)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5C394CEC09A9E38_OFFSET UNITYSDK_OFFSET(0xB10F810)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET UNITYSDK_OFFSET(0xB10FF50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xB10B900)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET UNITYSDK_OFFSET(0xB107330)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0xB104050)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET UNITYSDK_OFFSET(0xB10EC50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_1_OFFSET UNITYSDK_OFFSET(0xB109140)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_2_OFFSET UNITYSDK_OFFSET(0xB10A200)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_OFFSET UNITYSDK_OFFSET(0xB101B40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET UNITYSDK_OFFSET(0xB1068F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0xB108610)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET UNITYSDK_OFFSET(0xB1052C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_1_OFFSET UNITYSDK_OFFSET(0xB108CE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_2_OFFSET UNITYSDK_OFFSET(0xB10D400)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_OFFSET UNITYSDK_OFFSET(0xB106470)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C1BDD251D01677C7_OFFSET UNITYSDK_OFFSET(0xB102680)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C73EA910A3621B9E_OFFSET UNITYSDK_OFFSET(0xB101580)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET UNITYSDK_OFFSET(0xB10A820)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CCA3B631E04EEB5E_OFFSET UNITYSDK_OFFSET(0xB1042F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xB104940)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xB1056A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0xB10AD40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0xB10D9F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xB101EE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE8DE74D5B9AF622_OFFSET UNITYSDK_OFFSET(0xB10ADA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET UNITYSDK_OFFSET(0xD240210)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET UNITYSDK_OFFSET(0xB10EDC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET UNITYSDK_OFFSET(0xB10E690)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D28F2E1270F8EBC4_OFFSET UNITYSDK_OFFSET(0xB101740)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET UNITYSDK_OFFSET(0xB10F040)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_1_OFFSET UNITYSDK_OFFSET(0xB10E1A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_2_OFFSET UNITYSDK_OFFSET(0xB110FB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_3_OFFSET UNITYSDK_OFFSET(0xB111FC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_OFFSET UNITYSDK_OFFSET(0xB1096C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DCFB3915B0CF05BF_OFFSET UNITYSDK_OFFSET(0xB109BA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET UNITYSDK_OFFSET(0xB105B10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET UNITYSDK_OFFSET(0xB10D330)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET UNITYSDK_OFFSET(0xB101F40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET UNITYSDK_OFFSET(0xB106B00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB102CA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0xD240B40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EA6B0E809A0B8006_OFFSET UNITYSDK_OFFSET(0xB103BE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET UNITYSDK_OFFSET(0xD240070)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET UNITYSDK_OFFSET(0xB107210)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xB1103C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xB10B8A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F3D0FA924A47B671_OFFSET UNITYSDK_OFFSET(0xB1092C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET UNITYSDK_OFFSET(0xB10FC70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET UNITYSDK_OFFSET(0xB111490)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET UNITYSDK_OFFSET(0xB10BE90)
#define CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET UNITYSDK_OFFSET(0xD23E9E0)
#define CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET UNITYSDK_OFFSET(0xD23E9D0)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex = 71508;

class Class_1_2B7F8DBC98E3A114 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>** StaticGet_Field_1_66()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29540);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_63()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29548);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_43()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29568);
	}
	static ::UnityEngine::EventSystems::EventSystem** StaticGet_Field_1_39()
	{
		return (::UnityEngine::EventSystems::EventSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29570);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29578);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_55()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29580);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29588);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_60()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29590);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_59()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29598);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_47()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295A0);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149** StaticGet_Field_1_18()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295A8);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_54()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295B0);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_61()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295B8);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_57()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_68()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_32()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295F0);
	}
	static ::System::String** StaticGet_Field_1_31()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x295F8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_37()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29600);
	}
	static ::MoleMole::UIFormalVersionTipsPopWindowController** StaticGet_Field_1_51()
	{
		return (::MoleMole::UIFormalVersionTipsPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29608);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_35()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29610);
	}
	static ::UnityEngine::RectTransform** StaticGet_Field_1_46()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29618);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29620);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>** StaticGet_Field_1_33()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29628);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>** StaticGet_Field_1_64()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29630);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_38()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29638);
	}
	static ::Class_1_FC3A9C07FC781527** StaticGet_Field_1_29()
	{
		return (::Class_1_FC3A9C07FC781527**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29640);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_56()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29648);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_34()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29668);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>** StaticGet_Field_1_40()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Canvas*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29670);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_23()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29678);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>** StaticGet_Field_1_65()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29680);
	}
	static ::Class_1_7471DEF8EA38C73D** StaticGet_Field_1_20()
	{
		return (::Class_1_7471DEF8EA38C73D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29688);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_58()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29690);
	}
	static ::MoleMole::UIButtonPosDummyDialogPopWindowController** StaticGet_Field_1_52()
	{
		return (::MoleMole::UIButtonPosDummyDialogPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296B0);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_36()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296B8);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_62()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296C0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_49()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296C8);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7** StaticGet_Field_1_48()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296D0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_44()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296D8);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296E0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_45()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296E8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_41()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296F0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_42()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x296F8);
	}
	static ::UnityEngine::Rendering::Volume** StaticGet_Field_1_50()
	{
		return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x29700);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9590);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9594);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9595);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9596);
	}
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9597);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9598);
	}
	static ::System::Boolean* StaticGet_Field_1_24()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9599);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_5()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x959C);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95A4);
	}
	static ::System::Boolean* StaticGet_Field_1_30()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95A5);
	}
	static ::System::Boolean* StaticGet_Field_1_53()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95A6);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95A7);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95A8);
	}
	static ::System::Int32* StaticGet_Field_1_67()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95B0);
	}
	static ::Enum_3_F4705266FB2007C7* StaticGet_Field_1_28()
	{
		return (::Enum_3_F4705266FB2007C7*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95B4);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x95B8);
	}
	// static const ::System::Int32 Field_1_9 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3C; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x64; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x3E8; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_2479DB6829DABC35()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_72542D6B52D4A0D9()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET))();
	}

	static ::System::Void Method_1_4BEFBBCBE4D0C052(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE& a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_046C2BFE6915DB71(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_EB77E3EEF08CBAF2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEC148CBBF17D7FA(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_89029C5C04554B5A(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_9CB1E19D9AB035C7(::UnityEngine::RectTransform* a1, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46771E8BDEC25066(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_46771E8BDEC25066_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_226F30E5646F3210(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_226F30E5646F3210_OFFSET))(a1);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_FC3A9C07FC781527* a1)
	{
		return ((::System::Void(*)(::Class_1_FC3A9C07FC781527*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE6433C25680F9D_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET))();
	}

	static ::System::Void Method_1_6E94FC77130235DD(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6E94FC77130235DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Void Method_1_5BE35B0FEB4A10AB(::System::Boolean a1, ::Enum_3_231342C5F8BF8D7C a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET))();
	}

	static ::System::Void Method_1_1EB1C7990BDD71EC(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1EB1C7990BDD71EC_OFFSET))(a1);
	}

	static ::System::Void Method_1_D28F2E1270F8EBC4(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D28F2E1270F8EBC4_OFFSET))(a1);
	}

	static ::System::Void Method_1_678D73C32AB0B7F4(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_946E893B542F1A3F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_946E893B542F1A3F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCDB700847639204(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0FD0EC313FAAB75A_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_80D03FA8B547CE58(::UnityEngine::RectTransform* a1, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_80D03FA8B547CE58_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A4FA56A22F7FEA63(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::RectTransform*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A4FA56A22F7FEA63_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A Method_1_1CA52BD2DC0391D7(::UnityEngine::RectTransform* a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A(*)(::UnityEngine::RectTransform*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1CA52BD2DC0391D7_OFFSET))(a1, a2);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_80EB5729F71633D3(::System::Boolean a1)
	{
		return ((::MoleMole::EUILayoutPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_89029C5C04554B5A_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET))(a1);
	}

	static ::System::Void Method_1_89996C33D1692FDA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89996C33D1692FDA_OFFSET))(a1);
	}

	static ::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET))(a1);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_00AAEFA172B8A811(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0A5213CB8CB2A5BD(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0A5213CB8CB2A5BD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3708CF9C01F023A9(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Transform* Method_1_28F41EBE92BC4E85()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET))();
	}

	static ::System::Void Method_1_A69FA5E6168C596B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A69FA5E6168C596B_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_1(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET))(a1);
	}

	static ::MoleMole::UIFormalVersionTipsPopWindowController* Method_1_BFAD4C99E9F71448()
	{
		return ((::MoleMole::UIFormalVersionTipsPopWindowController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET))();
	}

	static ::System::Void Method_1_3CA8E1DB376B0A02(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_976E8FC3F80FD669(::UnityEngine::UI::Image* a1)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET))(a1);
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_81E9B794F20E5530(::MoleMole::UIBaseController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET))(a1);
	}

	static ::System::Void Method_1_DDD89A8FCB76301A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB023B529554A421(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_2CBB0F6A48E46BD8()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET))();
	}

	static ::System::Void Method_1_678D73C32AB0B7F4_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_1_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_OFFSET))();
	}

	static ::System::Void Method_1_00AAEFA172B8A811_1(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BD7A35330179A0D1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_0A47EEFB8676CAB5(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0A47EEFB8676CAB5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B7A1773B239604AE(::Enum_3_231342C5F8BF8D7C a1)
	{
		return ((::System::Boolean(*)(::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2F809989C4EE835D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_561A336AE697C2E7(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF3A97FF800F0C24_OFFSET))(a1);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_9411E558238384F8(::UnityEngine::Transform* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9411E558238384F8_OFFSET))(a1);
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB_1(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5EBCF276C230582C_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D_1()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_1_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET))();
	}

	static ::System::Void Method_1_BCDB700847639204_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_1_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_F3D0FA924A47B671()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F3D0FA924A47B671_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_52F05A9FA300CA21()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET))();
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_DC60637402A7F228()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_OFFSET))();
	}

	static ::System::Void Method_1_1EAE975500964E93(::UnityEngine::Transform* a1, ::UnityEngine::Transform*& a2, ::MoleMole::UIAdaptData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*&, ::MoleMole::UIAdaptData*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1EAE975500964E93_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_89AE11094F43AC85(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89AE11094F43AC85_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCDB700847639204_2(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E7C23E2BE6DA1D19(::Enum_3_010E9109C73EF1D1 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1006C351D0F01407(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_OFFSET))(a1);
	}

	static ::System::Void Method_1_00AAEFA172B8A811_2(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CC05DA97EA1F6B71(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_C1BDD251D01677C7(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C1BDD251D01677C7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET))();
	}

	static ::System::Void Method_1_CE8DE74D5B9AF622(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE8DE74D5B9AF622_OFFSET))(a1);
	}

	static ::System::Void Method_1_1006C351D0F01407_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_CCA3B631E04EEB5E(::Enum_3_010E9109C73EF1D1 a1)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CCA3B631E04EEB5E_OFFSET))(a1);
	}

	static ::UnityEngine::Canvas* Method_1_EC178BD852BE8117(::System::Int32 a1)
	{
		return ((::UnityEngine::Canvas*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Void Method_1_7D008406A3311600_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET))();
	}

	static ::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3A599F23178B2776_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* Method_1_A0ECCE7BE1C3463C()
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET))();
	}

	static ::System::Void Method_1_0D025125E9AE757D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_2(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_FD388C2755B5FCCC(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2AE479E81567F67B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2AE479E81567F67B_OFFSET))(a1);
	}

	static ::System::Void Method_1_14209EB871F2D390(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_14209EB871F2D390_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Volume* Method_1_0C29DEAAEA33A50D()
	{
		return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_DCFB3915B0CF05BF(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DCFB3915B0CF05BF_OFFSET))(a1, a2);
	}

	static ::UnityEngine::UI::Image* Method_1_52D7762668092C01()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET))();
	}

	static ::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AFC8215C57A0845A_OFFSET))();
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D_2()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_2_OFFSET))();
	}

	static ::System::Void Method_1_9B08052B40B4CA88(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D3BE5657B306B8B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4852C8351A25DF62(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4852C8351A25DF62_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET))();
	}

	static ::System::Void Method_1_A88B36294D55B85C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A88B36294D55B85C_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_DC60637402A7F228_1()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_1_OFFSET))();
	}

	static ::System::Void Method_1_7D008406A3311600_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET))();
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET))(a1);
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_0FD0EC313FAAB75A_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0FD0EC313FAAB75A_1_OFFSET))();
	}

	static ::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_84B92802FDAFF6C8_OFFSET))();
	}

	static ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 Method_1_BB471A493C07AFDD(::MoleMole::UIWindowController* a1)
	{
		return ((::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET))(a1);
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET))(a1);
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D38261AE637DE579(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::MoleMole::EUILayoutPlatform a3)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::RectTransform* Method_1_2027387AC7B01EC1(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_AF536B4FA9CCEAB1(::System::Boolean a1, ::MoleMole::Config::ScreenEffectType a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1FB03302975E8E7C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1FB03302975E8E7C_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_2BBEBCAB803DA2B9(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET))(a1);
	}

	static ::System::Void Method_1_B5C394CEC09A9E38(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5C394CEC09A9E38_OFFSET))(a1);
	}

	static ::System::Void Method_1_00AAEFA172B8A811_3(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00AAEFA172B8A811_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_747C3094A8E290AF(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_747C3094A8E290AF_OFFSET))(a1, a2);
	}

	static ::UnityEngine::RectTransform* Method_1_7851676584A3B118(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7851676584A3B118_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_3(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B5CA07811A0FF93E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_EA6B0E809A0B8006()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EA6B0E809A0B8006_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_5ACE4689A2EA70A3(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET))(a1);
	}

	static ::System::String* Method_1_561A336AE697C2E7_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_81A208F27DC70FE1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D4CA6C4FBD9AC35(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9D4CA6C4FBD9AC35_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_226F30E5646F3210_1(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_226F30E5646F3210_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET))();
	}

	static ::UnityEngine::EventSystems::EventSystem* Method_1_59FC201B63A994EA()
	{
		return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_DC60637402A7F228_2()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_2_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_6915D550D4431B85()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6915D550D4431B85_OFFSET))();
	}

	static ::System::Void Method_1_FD05468BC349B911(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_678D73C32AB0B7F4_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290EA767C459179_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_1_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_F7CCB9B57C3ED3D5(::System::Action* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET))(a1);
	}

	static ::System::Void Method_1_C73EA910A3621B9E(::UnityEngine::NAPRenderPipeline0::CameraRenderType a1)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C73EA910A3621B9E_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET))();
	}

	static ::Class_1_FC3A9C07FC781527* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_FC3A9C07FC781527*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_0F24D55EF44F180D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0F24D55EF44F180D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6BA7BB45F0BA72F4_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_DC60637402A7F228_3()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DC60637402A7F228_3_OFFSET))();
	}

	static ::System::Void Method_1_7D008406A3311600_3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET))();
	}

	static ::System::Void Method_1_87AE162B26227D62(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET))(a1);
	}

	static ::System::Void Method_1_6517221FCA930E60(::UnityEngine::Camera* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6517221FCA930E60_OFFSET))(a1, a2);
	}
};
