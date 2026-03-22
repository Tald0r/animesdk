#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_398BF5C97F336D80_Enum_3_9CA0D4E7230BAB54.h"
#include "unitysdk/Class_4_AC6D98911872E0CE.h"
#include "unitysdk/Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972.h"
#include "unitysdk/Class_5_2169ABC757988FED_Struct_2_6B9789F61C82B731.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_356D99BCC6A2E194.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_19.h"
#include "unitysdk/Enum_3_625EA19CD353E00F.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_9F5D7A8EAA940D1A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_140;
class Class_1_0AEBFEBDADDA07AC;
class Class_1_2B686E029302D4EC;
class Class_1_34B3048095D388ED;
class Class_1_3F9A20B8022097A7;
class Class_1_EBACA96C31DAB7D8;
class Class_1_F5B35B1B6669CF16;
class Class_1_FA793AB1D49D0132;
class Class_2_208CC9941471731A_281;
class Class_2_F5737224A0253470;
class Class_3_025A1030984A033D;
class Class_5_2169ABC757988FED_Class_1_22A8D76759698EC6;
class Class_5_AF65C3A968E836D2;
class ConfigTextureColor;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowChessboard3DModelController_CanvasRTHandler; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraShake; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PostEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_2169ABC757988FED_METHOD_5_047C0F8A16B2B100_OFFSET UNITYSDK_OFFSET(0x96A42F0)
#define CLASS_5_2169ABC757988FED_METHOD_5_04D3830FABC6C080_OFFSET UNITYSDK_OFFSET(0x9695CC0)
#define CLASS_5_2169ABC757988FED_METHOD_5_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x96A1BD0)
#define CLASS_5_2169ABC757988FED_METHOD_5_0B6C3969A0985ADD_OFFSET UNITYSDK_OFFSET(0x96A4570)
#define CLASS_5_2169ABC757988FED_METHOD_5_0D85ECDEF540E0AB_OFFSET UNITYSDK_OFFSET(0x96A2F00)
#define CLASS_5_2169ABC757988FED_METHOD_5_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x969E5D0)
#define CLASS_5_2169ABC757988FED_METHOD_5_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0x96A0EE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x96A06D0)
#define CLASS_5_2169ABC757988FED_METHOD_5_1676349FAEF4B05E_OFFSET UNITYSDK_OFFSET(0x96996C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x969B170)
#define CLASS_5_2169ABC757988FED_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x969A980)
#define CLASS_5_2169ABC757988FED_METHOD_5_190A18884C1C639D_OFFSET UNITYSDK_OFFSET(0x9696D00)
#define CLASS_5_2169ABC757988FED_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x96A26A0)
#define CLASS_5_2169ABC757988FED_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x969D640)
#define CLASS_5_2169ABC757988FED_METHOD_5_1BF00A41CF2C4F12_OFFSET UNITYSDK_OFFSET(0x96A0980)
#define CLASS_5_2169ABC757988FED_METHOD_5_1D6029A58F578A1C_OFFSET UNITYSDK_OFFSET(0x96992F0)
#define CLASS_5_2169ABC757988FED_METHOD_5_1DE18914025F4B8B_OFFSET UNITYSDK_OFFSET(0x96A1830)
#define CLASS_5_2169ABC757988FED_METHOD_5_1DF57FDE114E5C66_OFFSET UNITYSDK_OFFSET(0x969B760)
#define CLASS_5_2169ABC757988FED_METHOD_5_20C1DDBD285DAB3C_OFFSET UNITYSDK_OFFSET(0x9697E60)
#define CLASS_5_2169ABC757988FED_METHOD_5_215556991F31CB2D_OFFSET UNITYSDK_OFFSET(0x96A0C80)
#define CLASS_5_2169ABC757988FED_METHOD_5_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x969C220)
#define CLASS_5_2169ABC757988FED_METHOD_5_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x96A05C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_2983F8A9AFDFA1A1_OFFSET UNITYSDK_OFFSET(0x96A33F0)
#define CLASS_5_2169ABC757988FED_METHOD_5_2CBA24E50F81A5B9_OFFSET UNITYSDK_OFFSET(0x9696D90)
#define CLASS_5_2169ABC757988FED_METHOD_5_2D1DFA4BDF5C46E6_OFFSET UNITYSDK_OFFSET(0x9698540)
#define CLASS_5_2169ABC757988FED_METHOD_5_31AE1DAAA54840D4_OFFSET UNITYSDK_OFFSET(0x969C990)
#define CLASS_5_2169ABC757988FED_METHOD_5_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x969B200)
#define CLASS_5_2169ABC757988FED_METHOD_5_35F5B874CBA7A118_OFFSET UNITYSDK_OFFSET(0x969C550)
#define CLASS_5_2169ABC757988FED_METHOD_5_3639F7630BF860D6_OFFSET UNITYSDK_OFFSET(0x96A2210)
#define CLASS_5_2169ABC757988FED_METHOD_5_37557A8B8E6E8B39_OFFSET UNITYSDK_OFFSET(0x9699D50)
#define CLASS_5_2169ABC757988FED_METHOD_5_3766BE4458C9425D_OFFSET UNITYSDK_OFFSET(0x9699CE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_37BB817725896067_OFFSET UNITYSDK_OFFSET(0x96A4610)
#define CLASS_5_2169ABC757988FED_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x969A120)
#define CLASS_5_2169ABC757988FED_METHOD_5_3D52A1A2D5439DBD_OFFSET UNITYSDK_OFFSET(0x9697780)
#define CLASS_5_2169ABC757988FED_METHOD_5_3D5E4AF00755B665_OFFSET UNITYSDK_OFFSET(0x969E830)
#define CLASS_5_2169ABC757988FED_METHOD_5_3F22E1B45976ADD0_OFFSET UNITYSDK_OFFSET(0x96A12A0)
#define CLASS_5_2169ABC757988FED_METHOD_5_424C9FA207DBFFDB_OFFSET UNITYSDK_OFFSET(0x9697BF0)
#define CLASS_5_2169ABC757988FED_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9699540)
#define CLASS_5_2169ABC757988FED_METHOD_5_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x96A0C90)
#define CLASS_5_2169ABC757988FED_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x96A25D0)
#define CLASS_5_2169ABC757988FED_METHOD_5_4532BD255B8C36AB_OFFSET UNITYSDK_OFFSET(0x96A05E0)
#define CLASS_5_2169ABC757988FED_METHOD_5_454385D5944B07AD_OFFSET UNITYSDK_OFFSET(0x969CCF0)
#define CLASS_5_2169ABC757988FED_METHOD_5_460393A3D5933AF4_OFFSET UNITYSDK_OFFSET(0x96A04C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_46206B56BD30B28B_OFFSET UNITYSDK_OFFSET(0x9697CB0)
#define CLASS_5_2169ABC757988FED_METHOD_5_474DA5956978BDEA_OFFSET UNITYSDK_OFFSET(0x9697D30)
#define CLASS_5_2169ABC757988FED_METHOD_5_479759059E440327_OFFSET UNITYSDK_OFFSET(0x9695BC0)
#define CLASS_5_2169ABC757988FED_METHOD_5_492CEB5846D95EC9_OFFSET UNITYSDK_OFFSET(0x96A1980)
#define CLASS_5_2169ABC757988FED_METHOD_5_50DDC384D99AC5A6_OFFSET UNITYSDK_OFFSET(0x969B100)
#define CLASS_5_2169ABC757988FED_METHOD_5_513B65BEABCE291E_OFFSET UNITYSDK_OFFSET(0x9696930)
#define CLASS_5_2169ABC757988FED_METHOD_5_524E5A49AF6D7E2E_OFFSET UNITYSDK_OFFSET(0x96A0BE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_54ECB6F8D1A09C9B_OFFSET UNITYSDK_OFFSET(0x9698AE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_5703972D079E843F_OFFSET UNITYSDK_OFFSET(0x969AA10)
#define CLASS_5_2169ABC757988FED_METHOD_5_596025CB21CF14C0_OFFSET UNITYSDK_OFFSET(0x969DB00)
#define CLASS_5_2169ABC757988FED_METHOD_5_5C00C2EE4FCF347E_1_OFFSET UNITYSDK_OFFSET(0x96A05D0)
#define CLASS_5_2169ABC757988FED_METHOD_5_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x969DAE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_5F144E2E1B89F12E_OFFSET UNITYSDK_OFFSET(0x96A0AC0)
#define CLASS_5_2169ABC757988FED_METHOD_5_5F681CDC1D423614_OFFSET UNITYSDK_OFFSET(0x969E130)
#define CLASS_5_2169ABC757988FED_METHOD_5_60AB7DB0B4C90108_OFFSET UNITYSDK_OFFSET(0x96994B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x9699170)
#define CLASS_5_2169ABC757988FED_METHOD_5_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x96990C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x969E010)
#define CLASS_5_2169ABC757988FED_METHOD_5_672D0D1B42272B56_OFFSET UNITYSDK_OFFSET(0x9697840)
#define CLASS_5_2169ABC757988FED_METHOD_5_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x9697A10)
#define CLASS_5_2169ABC757988FED_METHOD_5_6D572A94658CB30C_OFFSET UNITYSDK_OFFSET(0x96965F0)
#define CLASS_5_2169ABC757988FED_METHOD_5_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x96951C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_6E0EC42BA575B9DE_OFFSET UNITYSDK_OFFSET(0x96A1D30)
#define CLASS_5_2169ABC757988FED_METHOD_5_794F73057AE890F3_OFFSET UNITYSDK_OFFSET(0x9698090)
#define CLASS_5_2169ABC757988FED_METHOD_5_7A1D7D178E6EA9D7_OFFSET UNITYSDK_OFFSET(0x969A6B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_7D64C5A1AD9135CD_OFFSET UNITYSDK_OFFSET(0x9695F00)
#define CLASS_5_2169ABC757988FED_METHOD_5_7DAF5B3ADF494895_1_OFFSET UNITYSDK_OFFSET(0x96A4940)
#define CLASS_5_2169ABC757988FED_METHOD_5_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x96A42E0)
#define CLASS_5_2169ABC757988FED_METHOD_5_7E09CC62D54B4A45_OFFSET UNITYSDK_OFFSET(0x9696ED0)
#define CLASS_5_2169ABC757988FED_METHOD_5_82ABFE24D5168B0C_1_OFFSET UNITYSDK_OFFSET(0x969A600)
#define CLASS_5_2169ABC757988FED_METHOD_5_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x9699B50)
#define CLASS_5_2169ABC757988FED_METHOD_5_82E29AD00B1A0960_OFFSET UNITYSDK_OFFSET(0x96A0400)
#define CLASS_5_2169ABC757988FED_METHOD_5_83E8416D0D6AFCBD_OFFSET UNITYSDK_OFFSET(0x96A2A40)
#define CLASS_5_2169ABC757988FED_METHOD_5_87E434B0F3F58B83_OFFSET UNITYSDK_OFFSET(0x96986C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_89CBD79E93630BB9_OFFSET UNITYSDK_OFFSET(0x96A0000)
#define CLASS_5_2169ABC757988FED_METHOD_5_8A8D0252A32ABC5E_1_OFFSET UNITYSDK_OFFSET(0x96A26B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_8A8D0252A32ABC5E_OFFSET UNITYSDK_OFFSET(0x96983C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x969C380)
#define CLASS_5_2169ABC757988FED_METHOD_5_8D6233DCDF4FFB3F_OFFSET UNITYSDK_OFFSET(0x96A2320)
#define CLASS_5_2169ABC757988FED_METHOD_5_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0x96A2830)
#define CLASS_5_2169ABC757988FED_METHOD_5_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x969BE80)
#define CLASS_5_2169ABC757988FED_METHOD_5_94AFC6A205FD73FE_OFFSET UNITYSDK_OFFSET(0x96A28C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x9699C00)
#define CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x9698460)
#define CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9699A00)
#define CLASS_5_2169ABC757988FED_METHOD_5_9C73488944707DA0_OFFSET UNITYSDK_OFFSET(0x969BF30)
#define CLASS_5_2169ABC757988FED_METHOD_5_A2FA6C3F3F699E32_OFFSET UNITYSDK_OFFSET(0x96A0FB0)
#define CLASS_5_2169ABC757988FED_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x969B4F0)
#define CLASS_5_2169ABC757988FED_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x9698FE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x96A2750)
#define CLASS_5_2169ABC757988FED_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x96A07C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x9699270)
#define CLASS_5_2169ABC757988FED_METHOD_5_AB74799383A212AF_OFFSET UNITYSDK_OFFSET(0x969EAB0)
#define CLASS_5_2169ABC757988FED_METHOD_5_ABC8EBD30E8338DF_OFFSET UNITYSDK_OFFSET(0x969EA10)
#define CLASS_5_2169ABC757988FED_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x9697920)
#define CLASS_5_2169ABC757988FED_METHOD_5_AE5AA9EC4ECA708E_OFFSET UNITYSDK_OFFSET(0x969CC40)
#define CLASS_5_2169ABC757988FED_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x96A0840)
#define CLASS_5_2169ABC757988FED_METHOD_5_B09F54A2D0398BF0_OFFSET UNITYSDK_OFFSET(0x96A4350)
#define CLASS_5_2169ABC757988FED_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9695E50)
#define CLASS_5_2169ABC757988FED_METHOD_5_B3E1AF3FBCF74E7D_OFFSET UNITYSDK_OFFSET(0x9696A10)
#define CLASS_5_2169ABC757988FED_METHOD_5_B6A66CD6EA2C7CFB_OFFSET UNITYSDK_OFFSET(0x96A1740)
#define CLASS_5_2169ABC757988FED_METHOD_5_BD6C45009051B38B_OFFSET UNITYSDK_OFFSET(0x969D6C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_BE04A7B3B5051979_OFFSET UNITYSDK_OFFSET(0x96A0110)
#define CLASS_5_2169ABC757988FED_METHOD_5_BEA748C409B0E6B1_OFFSET UNITYSDK_OFFSET(0x96966C0)
#define CLASS_5_2169ABC757988FED_METHOD_5_C68650213AFA02A9_1_OFFSET UNITYSDK_OFFSET(0x96A4590)
#define CLASS_5_2169ABC757988FED_METHOD_5_C68650213AFA02A9_OFFSET UNITYSDK_OFFSET(0x96A0A30)
#define CLASS_5_2169ABC757988FED_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x96A4580)
#define CLASS_5_2169ABC757988FED_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x9697D20)
#define CLASS_5_2169ABC757988FED_METHOD_5_C7945ECCA67CBBF0_OFFSET UNITYSDK_OFFSET(0x96995B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_C8241DD280C80D25_OFFSET UNITYSDK_OFFSET(0x96A3A60)
#define CLASS_5_2169ABC757988FED_METHOD_5_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x9694B00)
#define CLASS_5_2169ABC757988FED_METHOD_5_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0x9697F60)
#define CLASS_5_2169ABC757988FED_METHOD_5_D14985ADC23ACA0A_OFFSET UNITYSDK_OFFSET(0x96A1440)
#define CLASS_5_2169ABC757988FED_METHOD_5_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x9697DA0)
#define CLASS_5_2169ABC757988FED_METHOD_5_D7B7C909A67BD350_1_OFFSET UNITYSDK_OFFSET(0x9697B10)
#define CLASS_5_2169ABC757988FED_METHOD_5_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x969B400)
#define CLASS_5_2169ABC757988FED_METHOD_5_D89B3002E1B2DAC0_OFFSET UNITYSDK_OFFSET(0x969B560)
#define CLASS_5_2169ABC757988FED_METHOD_5_D8C9D457F1AEC5A6_OFFSET UNITYSDK_OFFSET(0x969D730)
#define CLASS_5_2169ABC757988FED_METHOD_5_D8EAC85EAAA29C4A_OFFSET UNITYSDK_OFFSET(0x96989B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_D8FD81FB74270BB0_OFFSET UNITYSDK_OFFSET(0x96950A0)
#define CLASS_5_2169ABC757988FED_METHOD_5_DF35B147068DD39F_OFFSET UNITYSDK_OFFSET(0x96A2760)
#define CLASS_5_2169ABC757988FED_METHOD_5_DFD04F4FB9D4909C_OFFSET UNITYSDK_OFFSET(0x96A3960)
#define CLASS_5_2169ABC757988FED_METHOD_5_E04D5EEFB3EB9DD5_OFFSET UNITYSDK_OFFSET(0x96976A0)
#define CLASS_5_2169ABC757988FED_METHOD_5_E06ECA39EB16C571_OFFSET UNITYSDK_OFFSET(0x9699940)
#define CLASS_5_2169ABC757988FED_METHOD_5_E152036B565BA33B_OFFSET UNITYSDK_OFFSET(0x969C620)
#define CLASS_5_2169ABC757988FED_METHOD_5_E2D8E94B87A09275_OFFSET UNITYSDK_OFFSET(0x969A8E0)
#define CLASS_5_2169ABC757988FED_METHOD_5_E4AA0C0A608DF091_OFFSET UNITYSDK_OFFSET(0x9697150)
#define CLASS_5_2169ABC757988FED_METHOD_5_E82E2569B5AD252F_OFFSET UNITYSDK_OFFSET(0x969E450)
#define CLASS_5_2169ABC757988FED_METHOD_5_EAD840FB7C9FE3D5_OFFSET UNITYSDK_OFFSET(0x969A190)
#define CLASS_5_2169ABC757988FED_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x9696000)
#define CLASS_5_2169ABC757988FED_METHOD_5_EE210CC725F0A411_OFFSET UNITYSDK_OFFSET(0x9698B90)
#define CLASS_5_2169ABC757988FED_METHOD_5_EE5B50661BFC9367_OFFSET UNITYSDK_OFFSET(0x96A1D90)
#define CLASS_5_2169ABC757988FED_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x96A28B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x969DAF0)
#define CLASS_5_2169ABC757988FED_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x969E5A0)
#define CLASS_5_2169ABC757988FED_METHOD_5_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x969E8B0)
#define CLASS_5_2169ABC757988FED_METHOD_5_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x96A3EB0)
#define CLASS_5_2169ABC757988FED_METHOD_5_F5BCA34E1157E704_OFFSET UNITYSDK_OFFSET(0x96A0680)
#define CLASS_5_2169ABC757988FED_METHOD_5_FD9F094CFF7AC651_OFFSET UNITYSDK_OFFSET(0x96A2C50)
#define CLASS_5_2169ABC757988FED_METHOD_5_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x9695AE0)
#define CLASS_5_2169ABC757988FED_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x96A13A0)
#define CLASS_5_2169ABC757988FED__CCTOR_OFFSET UNITYSDK_OFFSET(0x9696870)
#define CLASS_5_2169ABC757988FED__CTOR_OFFSET UNITYSDK_OFFSET(0x9694890)

inline static constexpr unsigned int Class_5_2169ABC757988FED_TypeDefinitionIndex = 36756;

class Class_5_2169ABC757988FED : public ::Class_4_AC6D98911872E0CE
{
public:
	static ::System::String** StaticGet_Field_5_24()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353C0);
	}
	static ::System::String** StaticGet_Field_5_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353C8);
	}
	static ::System::String** StaticGet_Field_5_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353D0);
	}
	static ::System::String** StaticGet_Field_5_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353D8);
	}
	static ::System::String** StaticGet_Field_5_21()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353E0);
	}
	static ::System::String** StaticGet_Field_5_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353E8);
	}
	static ::System::String** StaticGet_Field_5_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353F0);
	}
	static ::System::String** StaticGet_Field_5_25()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x353F8);
	}
	static ::MoleMole::UIHollowChessboard3DModelController** StaticGet_Field_5_2()
	{
		return (::MoleMole::UIHollowChessboard3DModelController**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x35400);
	}
	static ::System::String** StaticGet_Field_5_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2169ABC757988FED_TypeDefinitionIndex)->GetStaticField(0x35408);
	}
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_10; // 0x688
	::Class_1_F5B35B1B6669CF16* Field_5_15; // 0x690
	::System::String* Field_5_27; // 0x698
	::UnityEngine::Texture2D* Field_5_28; // 0x6A0
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_9; // 0x6A8
	::DG::Tweening::Tween* Field_5_14; // 0x6B0
	::Class_1_F5B35B1B6669CF16* Field_5_5; // 0x6B8
	::MoleMole::Config::ConfigHollowChessboard* Field_5_37; // 0x6C0
	::Il2CppArray<::UnityEngine::Color>* Field_5_1; // 0x6C8
	::UnityEngine::Texture2D* Field_5_29; // 0x6D0
	::Class_5_2169ABC757988FED_Class_1_22A8D76759698EC6* Field_5_6; // 0x6D8
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_11; // 0x6E0
	::Class_0_16E4307DCC419505_140* Field_5_16; // 0x6E8
	::UnityEngine::Texture2D* Field_5_31; // 0x6F0
	::UnityEngine::Texture2D* Field_5_30; // 0x6F8
	::Class_0_16E4307DCC419505_140* Field_5_17; // 0x700
	::MoleMole::UIHollowChessboard3DModelController_CanvasRTHandler* Field_5_32; // 0x708
	::Class_1_0AEBFEBDADDA07AC* Field_5_8; // 0x710
	::System::Threading::CancellationTokenSource* Field_5_7; // 0x718
	::Class_2_F5737224A0253470* Field_5_12; // 0x720
	::System::Single Field_5_40; // 0x728
	::Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972 Field_5_38; // 0x72C
	::System::Int32 Field_5_3; // 0x730
	::UnityEngine::Color Field_5_42; // 0x734
	::System::Int32 Field_5_33; // 0x744
	::System::Boolean Field_5_36; // 0x748
	::System::Boolean Field_5_0; // 0x749
	::System::Boolean Field_5_4; // 0x74A
	::Enum_3_356D99BCC6A2E194 Field_5_35; // 0x74C
	::System::Int32 Field_5_41; // 0x750
	::Enum_3_625EA19CD353E00F Field_5_34; // 0x754
	::System::Single Field_5_13; // 0x758
	::System::Single Field_5_39; // 0x75C

	::System::Void _ctor(::Struct_2_9F5D7A8EAA940D1A a1, ::Struct_2_6E23A591AC26A31E a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::UIHollowChessboard3DModelController* a4, ::Class_5_AF65C3A968E836D2* a5, ::Class_1_3F9A20B8022097A7* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9F5D7A8EAA940D1A, ::Struct_2_6E23A591AC26A31E, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::UIHollowChessboard3DModelController*, ::Class_5_AF65C3A968E836D2*, ::Class_1_3F9A20B8022097A7*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED__CCTOR_OFFSET))();
	}

	::System::Void Method_5_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_5_04D3830FABC6C080()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_04D3830FABC6C080_OFFSET))(this);
	}

	::System::Void Method_5_7D64C5A1AD9135CD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_7D64C5A1AD9135CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_6D572A94658CB30C(::Class_1_2B686E029302D4EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B686E029302D4EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_6D572A94658CB30C_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_513B65BEABCE291E(::MoleMole::IVideoPlayer* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_513B65BEABCE291E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B3E1AF3FBCF74E7D(::MoleMole::Config::ChessboardSwitchEffect* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ChessboardSwitchEffect*, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_B3E1AF3FBCF74E7D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_D8FD81FB74270BB0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D8FD81FB74270BB0_OFFSET))(this);
	}

	::System::Void Method_5_E4AA0C0A608DF091(::MoleMole::Config::ConfigHollowChessboard_MoveXY* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E4AA0C0A608DF091_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::TextureSheetData* Method_5_E04D5EEFB3EB9DD5(::Class_2_208CC9941471731A_281* a1)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E04D5EEFB3EB9DD5_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_3D52A1A2D5439DBD(::Class_1_398BF5C97F336D80_Enum_3_9CA0D4E7230BAB54 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_398BF5C97F336D80_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3D52A1A2D5439DBD_OFFSET))(this, a1);
	}

	::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_67C142C8523FB4DC_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_424C9FA207DBFFDB(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_424C9FA207DBFFDB_OFFSET))(this, a1, a2);
	}

	::Class_3_025A1030984A033D* Method_5_46206B56BD30B28B()
	{
		return ((::Class_3_025A1030984A033D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_46206B56BD30B28B_OFFSET))(this);
	}

	::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_5_2169ABC757988FED_Class_1_22A8D76759698EC6* Method_5_474DA5956978BDEA()
	{
		return ((::Class_5_2169ABC757988FED_Class_1_22A8D76759698EC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_474DA5956978BDEA_OFFSET))(this);
	}

	::System::Boolean Method_5_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D67046CBB357BF79_OFFSET))(this);
	}

	::System::Void Method_5_20C1DDBD285DAB3C(::MoleMole::UIWindowController* a1, ::MoleMole::Vector2Int a2, ::Class_1_FA793AB1D49D0132* a3, ::MoleMole::UIControllerContextBase* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::Vector2Int, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_20C1DDBD285DAB3C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_8A8D0252A32ABC5E(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_8A8D0252A32ABC5E_OFFSET))(this, a1);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_2D1DFA4BDF5C46E6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_2D1DFA4BDF5C46E6_OFFSET))(this, a1);
	}

	::System::Void Method_5_87E434B0F3F58B83(::MoleMole::Config::ConfigHollowChessboard_Flash* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Flash*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_87E434B0F3F58B83_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_5_54ECB6F8D1A09C9B(::MoleMole::Config::ConfigHollowChessboard_CameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_54ECB6F8D1A09C9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_EE210CC725F0A411(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_EE210CC725F0A411_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_5_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_5_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_5_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_5_1D6029A58F578A1C(::MoleMole::ConfigAnimationCurveGroup* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::MoleMole::UICameraAtom>* a4, ::System::Single a5, ::System::Action* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::UICameraAtom>*, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1D6029A58F578A1C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::ConfigTextureColor* Method_5_60AB7DB0B4C90108()
	{
		return ((::ConfigTextureColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_60AB7DB0B4C90108_OFFSET))(this);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_C7945ECCA67CBBF0(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C7945ECCA67CBBF0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_1676349FAEF4B05E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1676349FAEF4B05E_OFFSET))(this);
	}

	::System::Int32 Method_5_E06ECA39EB16C571()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E06ECA39EB16C571_OFFSET))(this);
	}

	::System::Void Method_5_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_F5B35B1B6669CF16* Method_5_82ABFE24D5168B0C()
	{
		return ((::Class_1_F5B35B1B6669CF16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_82ABFE24D5168B0C_OFFSET))(this);
	}

	::System::Void Method_5_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_5_3766BE4458C9425D(::Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3766BE4458C9425D_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_37557A8B8E6E8B39(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::String* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_37557A8B8E6E8B39_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_EAD840FB7C9FE3D5(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_EAD840FB7C9FE3D5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_7A1D7D178E6EA9D7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_7A1D7D178E6EA9D7_OFFSET))(this);
	}

	::System::Void Method_5_E2D8E94B87A09275(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E2D8E94B87A09275_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_D8EAC85EAAA29C4A(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D8EAC85EAAA29C4A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_5_5703972D079E843F(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Int32 a7, ::System::String* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_5703972D079E843F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_5_50DDC384D99AC5A6(::Class_1_2B686E029302D4EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B686E029302D4EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_50DDC384D99AC5A6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_5_BEA748C409B0E6B1(::Class_1_2B686E029302D4EC* a1, ::Class_1_EBACA96C31DAB7D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B686E029302D4EC*, ::Class_1_EBACA96C31DAB7D8*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_BEA748C409B0E6B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Single Method_5_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_5_D89B3002E1B2DAC0(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D89B3002E1B2DAC0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_D7B7C909A67BD350_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D7B7C909A67BD350_1_OFFSET))(this);
	}

	::System::Boolean Method_5_1DF57FDE114E5C66(::Share::GridDir a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1DF57FDE114E5C66_OFFSET))(this, a1);
	}

	::Class_1_F5B35B1B6669CF16* Method_5_82ABFE24D5168B0C_1()
	{
		return ((::Class_1_F5B35B1B6669CF16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_82ABFE24D5168B0C_1_OFFSET))(this);
	}

	::System::Void Method_5_9C73488944707DA0(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4, ::MoleMole::HollowChessboard::GeometryHeightType a5, ::System::Boolean a6, ::Class_1_34B3048095D388ED* a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_9C73488944707DA0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_5_92B540916F43AC48(::Enum_3_4608E37A1B3D374A_19 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_19))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_92B540916F43AC48_OFFSET))(this, a1);
	}

	::System::Void Method_5_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_35F5B874CBA7A118(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_35F5B874CBA7A118_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_E152036B565BA33B(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E152036B565BA33B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_31AE1DAAA54840D4(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_31AE1DAAA54840D4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_454385D5944B07AD(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_454385D5944B07AD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Single Method_5_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3422201382CE593B_OFFSET))(this);
	}

	::System::Int32 Method_5_D8C9D457F1AEC5A6(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D8C9D457F1AEC5A6_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_140* Method_5_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_140*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_5_596025CB21CF14C0(::MoleMole::Config::ConfigHollowChessboard_Move* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Move*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_596025CB21CF14C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_5_5F681CDC1D423614(::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_5F681CDC1D423614_OFFSET))(this, a1);
	}

	::System::Void Method_5_E82E2569B5AD252F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_E82E2569B5AD252F_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_5_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_0EB2899F45F512FE_OFFSET))(this);
	}

	::Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972 Method_5_BD6C45009051B38B()
	{
		return ((::Class_5_2169ABC757988FED_Enum_3_4D5FFF8B0CC63972(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_BD6C45009051B38B_OFFSET))(this);
	}

	::System::Boolean Method_5_3D5E4AF00755B665(::Class_1_0AEBFEBDADDA07AC* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3D5E4AF00755B665_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_ABC8EBD30E8338DF()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_ABC8EBD30E8338DF_OFFSET))(this);
	}

	::UnityEngine::Color Method_5_AB74799383A212AF()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_AB74799383A212AF_OFFSET))(this);
	}

	::System::Void Method_5_89CBD79E93630BB9(::System::Nullable_1<::System::Single> a1, ::Class_5_2169ABC757988FED_Struct_2_6B9789F61C82B731& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::Class_5_2169ABC757988FED_Struct_2_6B9789F61C82B731&))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_89CBD79E93630BB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_BE04A7B3B5051979(::MoleMole::Config::ConfigHollowChessboard_PostEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_BE04A7B3B5051979_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_5_460393A3D5933AF4(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_460393A3D5933AF4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_140* Method_5_5C00C2EE4FCF347E_1()
	{
		return ((::Class_0_16E4307DCC419505_140*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_5C00C2EE4FCF347E_1_OFFSET))(this);
	}

	::System::Boolean Method_5_7E09CC62D54B4A45(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::UIHollowChessPieceParticle_TransformType a4, ::System::Nullable_1<::Foundation::Unreal::FTransform> a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_7E09CC62D54B4A45_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_5_4532BD255B8C36AB(::Class_2_208CC9941471731A_281* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_4532BD255B8C36AB_OFFSET))(this, a1);
	}

	::UnityEngine::Color& Method_5_F5BCA34E1157E704()
	{
		return ((::UnityEngine::Color&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F5BCA34E1157E704_OFFSET))(this);
	}

	::System::Single Method_5_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Void Method_5_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_5_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_5_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_5_C68650213AFA02A9(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C68650213AFA02A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_672D0D1B42272B56(::Class_1_0AEBFEBDADDA07AC* a1, ::Class_1_398BF5C97F336D80_Enum_3_9CA0D4E7230BAB54 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::Class_1_398BF5C97F336D80_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_672D0D1B42272B56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_5F144E2E1B89F12E(::System::Boolean a1, ::MoleMole::UIHollowChessPieceParticle_TransformType a2, ::System::Nullable_1<::Foundation::Unreal::FTransform> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_5F144E2E1B89F12E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_794F73057AE890F3(::MoleMole::Vector2Int a1, ::MoleMole::UIWindowController* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::UIWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_794F73057AE890F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_524E5A49AF6D7E2E(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_524E5A49AF6D7E2E_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::UnityEngine::Color>* Method_5_215556991F31CB2D()
	{
		return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_215556991F31CB2D_OFFSET))(this);
	}

	::System::Void Method_5_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Int32 Method_5_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_107247B6331E64C6_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_AE5AA9EC4ECA708E(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_AE5AA9EC4ECA708E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_A2FA6C3F3F699E32(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A2FA6C3F3F699E32_OFFSET))(this, a1);
	}

	::System::String* Method_5_2CBA24E50F81A5B9(::MoleMole::ScreenSwitchType a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::ScreenSwitchType))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_2CBA24E50F81A5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_3F22E1B45976ADD0(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3F22E1B45976ADD0_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_5_D14985ADC23ACA0A(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D14985ADC23ACA0A_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::TextureSheetData* Method_5_190A18884C1C639D(::System::String* a1)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_190A18884C1C639D_OFFSET))(this, a1);
	}

	::System::Void Method_5_1DE18914025F4B8B(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1DE18914025F4B8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_492CEB5846D95EC9(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_492CEB5846D95EC9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_5_6E0EC42BA575B9DE(::MoleMole::UIHollowChessboard3DModelController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_6E0EC42BA575B9DE_OFFSET))(a1);
	}

	::System::Void Method_5_EE5B50661BFC9367(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_EE5B50661BFC9367_OFFSET))(this, a1);
	}

	::System::Void Method_5_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Single Method_5_3639F7630BF860D6(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_3639F7630BF860D6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_8D6233DCDF4FFB3F(::Class_0_16E4307DCC419505_140*& a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_140*&, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_8D6233DCDF4FFB3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_5_8A8D0252A32ABC5E_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_8A8D0252A32ABC5E_1_OFFSET))(this, a1);
	}

	::Enum_3_625EA19CD353E00F Method_5_A96DCA30C6927810()
	{
		return ((::Enum_3_625EA19CD353E00F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_5_DF35B147068DD39F(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_DF35B147068DD39F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_908CDC094010F209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_908CDC094010F209_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_5_94AFC6A205FD73FE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_94AFC6A205FD73FE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_83E8416D0D6AFCBD(::System::String* a1, ::System::Action* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_83E8416D0D6AFCBD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_5_1BF00A41CF2C4F12(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Texture2D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_1BF00A41CF2C4F12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_FD9F094CFF7AC651(::MoleMole::Config::ConfigHollowChessboard_CameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_FD9F094CFF7AC651_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_0D85ECDEF540E0AB(::Class_2_208CC9941471731A_281* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_281*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_0D85ECDEF540E0AB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_2983F8A9AFDFA1A1(::MoleMole::Config::ConfigHollowChessboard_Rotate* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Rotate*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_2983F8A9AFDFA1A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_DFD04F4FB9D4909C(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_DFD04F4FB9D4909C_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_5_B6A66CD6EA2C7CFB(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* a1, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_B6A66CD6EA2C7CFB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_5_82E29AD00B1A0960(::MoleMole::Config::ConfigHollowChessboard_PostEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_82E29AD00B1A0960_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_C8241DD280C80D25(::Share::GridDir a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C8241DD280C80D25_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_F55212E77440B167_OFFSET))(this);
	}

	::System::Void Method_5_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Method_5_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_140*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	static ::MoleMole::UIHollowChessboard3DModelController* Method_5_047C0F8A16B2B100()
	{
		return ((::MoleMole::UIHollowChessboard3DModelController*(*)())((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_047C0F8A16B2B100_OFFSET))();
	}

	::System::Void Method_5_B09F54A2D0398BF0(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_B09F54A2D0398BF0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_0B6C3969A0985ADD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_0B6C3969A0985ADD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_5_C68650213AFA02A9_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_C68650213AFA02A9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_37BB817725896067(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1, ::System::Action* a2, ::System::Boolean a3, ::Class_1_34B3048095D388ED* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_37BB817725896067_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_7DAF5B3ADF494895_1(::Class_0_16E4307DCC419505_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_140*))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_METHOD_5_7DAF5B3ADF494895_1_OFFSET))(this, a1);
	}
};
